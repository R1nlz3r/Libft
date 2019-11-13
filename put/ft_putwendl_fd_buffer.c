/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwendl_fd_buffer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:33:55 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:51:55 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
**	ft_putwendl_fd_buffer: put wide end line file descriptor buffer
**		Adds a wchar_t* and a newline to a static wchar_t*
**		Writes on a file descriptor int and flushes the static wide string
**			if a true value for an int is passed as a parameter
**		Returns a negative value for a failed allocation
*/

int		ft_putwendl_fd_buffer(wchar_t *ws, int release, int fd)
{
	if (!(ws = ft_wstrbuffer(ws))
		|| !(ws = ft_wstrbuffer(L"\n")))
		return (-1);
	if (release)
	{
		ft_putwstr_fd(ws, fd);
		ft_wstrclr(ws);
	}
	return (0);
}
