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

#include "get.h"

/*
**	get_pipe: get pipe
**		Reads the entire data from a file descriptor int
**		The system function read is called for a BUFF_SIZE number
**			of characters every time
**		The total length is stored in a ssize_t* parameter
**		Allocates the needed memory space to store the data
**		Returns it or NULL for a failed allocation or an error
*/

void	*get_pipe(int fd, ssize_t *read_len)
{
	void		*mem;
	void		*tmp;
	ssize_t		buf_len;

	buf_len = 1;
	if (!read_len || !(mem = ft_memalloc(0)))
		return (NULL);
	*read_len = 0;
	while (buf_len > 0)
	{
		if (!(tmp = get_file_segment(fd, mem, BUFF_SIZE, read_len, &buf_len)))
		{
			*read_len = -1;
			return (NULL);
		}
		ft_memdel(&mem);
		mem = tmp;
	}
	if (buf_len == -1)
		*read_len = -1;
	return (mem);
}
