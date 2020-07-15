/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pipe.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:06:36 by mapandel          #+#    #+#             */
/*   Updated: 2020/01/16 21:24:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get.h"

/*
**	get_pipe: get pipe
**		Reads the entire data from a file descriptor int
**		The system function read is called for a BUFF_SIZE number
**			of characters every time
**		The total length is stored in a ssize_t* parameter
**		Allocates the needed memory space to store the data
**		Returns it or NULL for a failed allocation or an error
*/

static void		*join_file_segments(void *s1, void *s2, ssize_t *read_len,
	ssize_t segment_len)
{
	void	*join;

	if (!segment_len)
		return (s1);
	join = ft_memjoin(s1, s2, (size_t)*read_len, (size_t)segment_len);
	ft_memdel(&s1);
	s1 = join;
	*read_len += segment_len;
	return (s1);
}

void			*get_pipe(int fd, ssize_t *read_len)
{
	void		*mem;
	void		*segment;
	ssize_t		segment_len;

	if (!read_len)
		return (NULL);
	mem = NULL;
	segment_len = 1;
	while (segment_len)
	{
		if (!(segment = get_file_segment(fd, BUFF_SIZE, &segment_len))
			|| segment_len == -1
			|| !(mem = join_file_segments(mem, segment, read_len, segment_len)))
		{
			*read_len = -1;
			ft_memdel(&mem);
			return (NULL);
		}
		ft_memdel(&segment);
	}
	return (mem);
}
