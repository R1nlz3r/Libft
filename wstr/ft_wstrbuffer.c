/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrbuffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 06:52:43 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 00:28:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
**	ft_strbuffer: wide string buffer
**		Joins up a wchar_t* to a static wchar_t* buffer
**		NULL behavior is handled
**		Returns this new wide string or NULL if the allocation failed
*/

wchar_t		*ft_wstrbuffer(wchar_t *ws)
{
	static wchar_t		*buf;

	return (buf = ft_wstrjoin_leakless(buf, ws));
}
