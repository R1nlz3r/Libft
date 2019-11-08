/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:38:13 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 00:50:02 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putwstr_fd_buffer: put wide string file descriptor buffer
**		Adds a wchar_t* to a static wchar_t*
**		Writes on a file descriptor int and flushes the static wide string
**			if a true value for an int is passed as a parameter
**		NULL behaviour is handled
**		Returns a negative value for a failed allocation
*/

int		ft_putwstr_fd_buffer(wchar_t *ws, int release, int fd)
{
	if (!(ws = ft_wstrbuffer(ws)))
		return (-1);
	if (release)
	{
		ft_putwstr_fd(ws, fd);
		ft_wstrclr(ws);
	}
	return (0);
}
