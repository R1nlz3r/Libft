/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd_buffer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:16:51 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:51:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
**	ft_putwchar_fd_buffer: put wide character file descriptor buffer
**		Adds a wchar_t to a static wchar_t*
**		Writes on a file descriptor int and flushes the static wide string
**			if a true value for an int is passed as a parameter
**		Returns a negative value for a failed allocation
*/

int		ft_putwchar_fd_buffer(wchar_t wc, int release, int fd)
{
	wchar_t		*ws;

	if (!(ws = ft_wstrnew(1)))
		return (-1);
	ws[0] = wc;
	if (!(ws = ft_wstrbuffer_leakless(ws)))
		return (-1);
	if (release)
	{
		ft_putwstr_fd(ws, fd);
		ft_wstrclr(ws);
	}
	return (0);
}
