/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:05:41 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 23:58:30 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
**	ft_wstrjoin: wide string join
**		Creates a wchar_t* from the concatenation of two wchar_t const*
**		NULL behaviors are handled
**		Returns this new wide string or NULL if the allocation failed
*/

wchar_t			*ft_wstrjoin(wchar_t const *s1, wchar_t const *s2)
{
	size_t		len;
	wchar_t		*result;

	len = ft_wstrlen_nullcrashless(s1);
	len += ft_wstrlen_nullcrashless(s2);
	if (!(result = ft_wstrnew(len)))
		return (NULL);
	result = ft_wstrcpy_nullcrashless(result, s1);
	result = ft_wstrcat_nullcrashless(result, s2);
	return (result);
}
