/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 02:37:46 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:51:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
**	ft_putchar_buffer: put character buffer
**		Adds a wchar_t to a static wchar_t*
**		Writes on the standard output and flushes the static wide string
**			if a true value for an int is passed as a parameter
**		Returns a negative value for a failed allocation
*/

int		ft_putwchar_buffer(wchar_t wc, int release)
{
	wchar_t		*ws;

	if (!(ws = ft_wstrnew(1)))
		return (-1);
	ws[0] = wc;
	if (!(ws = ft_wstrbuffer_leakless(ws)))
		return (-1);
	if (release)
	{
		ft_putwstr(ws);
		ft_wstrclr(ws);
	}
	return (0);
}
