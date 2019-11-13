/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 06:37:32 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:51:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
**	ft_putstr_fd_buffer: put string file descriptor buffer
**		Adds a char* to a static char*
**		Writes on a file descriptor int and flushes the static string
**			if a true value for an int is passed as a parameter
**		NULL behaviour is handled
**		Returns a negative value for a failed allocation
*/

int		ft_putstr_fd_buffer(char *s, int release, int fd)
{
	if (!(s = ft_strbuffer(s)))
		return (-1);
	if (release)
	{
		ft_putstr_fd(s, fd);
		ft_strclr(s);
	}
	return (0);
}
