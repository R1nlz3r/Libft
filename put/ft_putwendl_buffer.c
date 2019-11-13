/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwendl_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:20:32 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:51:52 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
**	ft_putwendl_buffer: put wide end line buffer
**		Adds a wchar_t* and a newline to a static wchar_t*
**		Writes on the standard output and flushes the static wide string
**			if a true value for an int is passed as a parameter
**		NULL behaviour is handled
**		Returns a negative value for a failed allocation
*/

int		ft_putwendl_buffer(wchar_t *ws, int release)
{
	if (!(ws = ft_wstrbuffer(ws))
		|| !(ws = ft_wstrbuffer(L"\n")))
		return (-1);
	if (release)
	{
		ft_putwstr(ws);
		ft_wstrclr(ws);
	}
	return (0);
}
