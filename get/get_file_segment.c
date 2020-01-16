/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_segment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 14:21:36 by mapandel          #+#    #+#             */
/*   Updated: 2020/01/16 19:36:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get.h"

/*
**	get_file_segment: get file segment
**		Reads for a size_t length the data from a file descriptor int
**		The effective read length if stored in a ssize_t* parameter
**		Appends the data to a void* parameter
**		The total ssize_t* length is updated
**		Allocates the needed memory space to store the data
**		Returns it or NULL for a failed allocation or an error
*/


void	*get_file_segment(int fd, void *s, size_t buf_len,
	ssize_t *total_read_len, ssize_t *read_len)
{
	void	*result;
	void	*buf;

	if (!read_len)
		return (NULL);
	if (!total_read_len || *total_read_len == -1
		|| !(buf = ft_memalloc(buf_len)))
	{
		*read_len = -1;
		return (NULL);
	}
	*read_len = read(fd, buf, buf_len);
	if (*read_len == -1
		|| !(result = ft_memjoin(s, buf, (size_t)*total_read_len,
		(size_t)*read_len)))
	{
		*read_len = -1;
		ft_memdel(&buf);
		return (NULL);
	}
	*total_read_len += *read_len;
	ft_memdel(&buf);
	return (result);
}
