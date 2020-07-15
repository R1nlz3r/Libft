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

#include "ft_get.h"

/*
**	get_file_segment: get file segment
**		Reads the data from a file descriptor int for a size_t length
**		The effective read length if stored in a ssize_t* parameter
**		Allocates the needed memory space to store the data
**		Returns it or NULL for a failed allocation or an error
*/

void	*get_file_segment(int fd, size_t buf_len, ssize_t *read_len)
{
	void	*buf;

	if (!read_len)
		return (NULL);
	if (!(buf = ft_memalloc(buf_len)))
	{
		*read_len = -1;
		return (NULL);
	}
	*read_len = read(fd, buf, buf_len);
	if (*read_len == -1)
	{
		*read_len = -1;
		ft_memdel(&buf);
		return (NULL);
	}
	return (buf);
}
