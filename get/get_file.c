/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:39:43 by mapandel          #+#    #+#             */
/*   Updated: 2020/01/16 21:26:05 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get.h"

/*
**	get_file: get file
**		Reads the entire data from a file descriptor int
**		The system function read is called for the file size length
**			found after a call to the fstat system function
**		If the file size is bigger than the read buffer size,
**			multiple calls does happen
**		Pipe files are handled apart
**		The total read length is stored in a ssize_t* parameter
**		Allocates the needed memory space to store the data
**		Returns it or NULL for a failed allocation or an error
*/

static void		segmented_read_calls(int fd, void *mem, ssize_t *read_len)
{
	ssize_t		tmp_size;
	void		*buf;

	if (!(buf = ft_memalloc(2147479552)))
	{
		*read_len = -1;
		return ;
	}
	*read_len = 0;
	while ((tmp_size = read(fd, buf, 2147479552)) && tmp_size > 0)
	{
		ft_memcpy(&((char*)mem)[*read_len], buf, (size_t)tmp_size);
		*read_len += tmp_size;
	}
	if (tmp_size == -1)
		*read_len = -1;
	ft_memdel(&buf);
}

void			*get_file(int fd, ssize_t *read_len)
{
	struct stat		*file_stats;
	size_t			file_size;
	void			*mem;

	if (!read_len || !(file_stats = ft_memalloc(sizeof(struct stat)))
		|| fstat(fd, file_stats))
		return (NULL);
	file_size = (size_t)file_stats->st_size;
	if (S_ISFIFO(file_stats->st_mode) || S_ISCHR(file_stats->st_mode))
	{
		ft_memdel((void**)&file_stats);
		return (get_pipe(fd, read_len));
	}
	ft_memdel((void**)&file_stats);
	if (!(mem = ft_memalloc(file_size)))
		return (NULL);
	if (file_size <= 2147479552)
		*read_len = read(fd, mem, file_size);
	else
		segmented_read_calls(fd, mem, read_len);
	return (mem);
}
