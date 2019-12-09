/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:39:43 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/09 01:07:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get.h"

/*
**	get_file: get file
**		Reads the entire file from a file descriptor int
**		The system function read is called for a BUFF_SIZE number
**			of blocks every time
**		The total length if stored in a ssize_t* parameter
**		Allocates the needed memory space to store the read data
**		Returns it or NULL for a failed allocation or an error
*/

static int		buffer_stack(void **mem, void *buf, ssize_t *len_read,
	ssize_t buf_len)
{
	void		*tmp;

	if (!(tmp = ft_memalloc((size_t)*len_read + (size_t)buf_len)))
		return (-1);
	tmp = ft_memcpy(tmp, *mem, (size_t)*len_read);
	ft_memdel(mem);
	ft_memcpy((char*)tmp + *len_read, buf, (size_t)buf_len);
	*len_read += buf_len;
	if (!(*mem = ft_memalloc((size_t)*len_read)))
		return (-1);
	ft_memcpy(*mem, tmp, (size_t)*len_read);
	ft_memdel(&tmp);
	return (0);
}

void			*get_file(int fd, ssize_t *len_read)
{
	void		*mem;
	void		*buf;
	ssize_t		buf_len;

	if (!(mem = ft_memalloc(0)))
		return (NULL);
	*len_read = 0;
	if (!(buf = ft_memalloc(BUFF_SIZE)))
		return (NULL);
	while ((buf_len = read(fd, buf, BUFF_SIZE)) && buf_len > 0)
	{
		if (buffer_stack(&mem, buf, len_read, buf_len))
			return (NULL);
	}
	ft_memdel(&buf);
	if (buf_len == -1)
		*len_read = -1;
	return (mem);
}
