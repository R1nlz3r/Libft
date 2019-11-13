/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 04:40:01 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
**	ft_putchar_fd_buffer: put character file descriptor buffer
**		Adds a char to a static char*
**		Writes on a file descriptor int and flushes the static string
**			if a true value for an int is passed as a parameter
**		Returns a negative value for a failed allocation
*/

int		ft_putchar_fd_buffer(char c, int release, int fd)
{
	char	*s;

	if (!(s = ft_strnew(1)))
		return (-1);
	s[0] = c;
	if (!(s = ft_strbuffer_leakless(s)))
		return (-1);
	if (release)
	{
		ft_putstr_fd(s, fd);
		ft_strclr(s);
	}
	return (0);
}
