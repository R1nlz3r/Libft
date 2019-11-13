/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 06:33:20 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:30 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
**	ft_putendl_fd_buffer: put end line file descriptor buffer
**		Adds a char* and a newline to a static char*
**		Writes on a file descriptor int and flushes the static string
**			if a true value for an int is passed as a parameter
**		Returns a negative value for a failed allocation
*/

int		ft_putendl_fd_buffer(char *s, int release, int fd)
{
	if (!(s = ft_strbuffer(s))
		|| !(s = ft_strbuffer("\n")))
		return (-1);
	if (release)
	{
		ft_putstr_fd(s, fd);
		ft_strclr(s);
	}
	return (0);
}
