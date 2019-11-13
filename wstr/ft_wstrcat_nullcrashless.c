/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrcat_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 04:48:12 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:44:57 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wstr.h"

/*
** ft_wstrcat_nullcrashless: wide string concatenation null crashless
**		Copies a const wchar_t* at the end of a wchar_t*
**		The destination should be allocated properly to receive the data
**		NULL behaviors are handled
**		Returns the destination
*/

wchar_t		*ft_wstrcat_nullcrashless(wchar_t *dest, const wchar_t *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (dest);
	while (dest[i])
		++i;
	while (src && src[j])
		dest[i++] = src[j++];
	dest[i] = L'\0';
	return (dest);
}
