/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:37:22 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 00:49:47 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putwstr_buffer: put wide string buffer
**		Adds a wchar_t* to a static wchar_t*
**		Writes on the standard output and flushes the static wide string
**			if a true value for an int is passed as a parameter
**		NULL behaviour is handled
**		Returns a negative value for a failed allocation
*/

int		ft_putwstr_buffer(wchar_t *ws, int release)
{
	if (!(ws = ft_wstrbuffer(ws)))
		return (-1);
	if (release)
	{
		ft_putwstr(ws);
		ft_wstrclr(ws);
	}
	return (0);
}
