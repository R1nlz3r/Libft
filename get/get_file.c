/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:39:43 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/23 05:09:22 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get.h"

/*
**	get_file: get file
**		Reads the entire file from a file descriptor int
**		The system function read is called for the file size length
**			found after a call to the fstat system function
**		If the file size is bigger than the read buffer size,
**			multiple calls does happen
**		The total length read if stored in a ssize_t* parameter
**		Allocates the needed memory space to store the read data
**		Returns it or NULL for a failed allocation or an error
*/

static void		segmented_read_calls(int fd, void *mem, ssize_t *len_read)
{
	ssize_t		tmp_size;
	void		*buf;

	if (!(buf = ft_memalloc(2147479552)))
	{
		*len_read = -1;
		return ;
	}
	*len_read = 0;
	while ((tmp_size = read(fd, buf, 2147479552)) && tmp_size > 0)
	{
		ft_memcpy(&((char*)mem)[*len_read], buf, (size_t)tmp_size);
		*len_read += tmp_size;
	}
	if (tmp_size == -1)
		*len_read = -1;
	ft_memdel(&buf);
}

void			*get_file(int fd, ssize_t *len_read)
{
	struct stat		*file_stats;
	size_t			file_size;
	void			*mem;

	if (!len_read || !(file_stats = ft_memalloc(sizeof(struct stat))))
		return (NULL);
	fstat(fd, file_stats);
	file_size = (size_t)file_stats->st_size;
	ft_memdel((void**)&file_stats);
	if (!(mem = ft_memalloc(file_size)))
		return (NULL);
	if (file_size <= 2147479552)
		*len_read = read(fd, mem, file_size);
	else
		segmented_read_calls(fd, mem, len_read);
	return (mem);
}
