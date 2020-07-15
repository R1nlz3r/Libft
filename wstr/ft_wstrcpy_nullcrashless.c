/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrcpy_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 05:11:18 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:54:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
** ft_wstrcpy_nullcrashless: wide string copy null crashless
**		Copies a const wchar_t* into a wchar_t*
**		The destination should be allocated properly to receive the data
**		NULL behaviors are handled
**		Returns the destination
*/

wchar_t		*ft_wstrcpy_nullcrashless(wchar_t *dest, const wchar_t *src)
{
	size_t i;

	i = 0;
	if (!src || !dest)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = L'\0';
	return (dest);
}
