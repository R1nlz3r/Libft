/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrjoin_leakless.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:09:11 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 00:26:44 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_wstrjoin_leakless: wide string join leaklesss
**		Creates a wchar_t* from the concatenation
**			of a wchar_t* and a wchar_t const*
**		Frees up the first source parameter wchar_t*
**		NULL behaviors are handled
**		Returns this new wide string or NULL if the allocation failed
*/

wchar_t			*ft_wstrjoin_leakless(wchar_t *s1, wchar_t const *s2)
{
	size_t		len;
	wchar_t		*result;

	len = ft_wstrlen_nullcrashless(s1);
	len += ft_wstrlen_nullcrashless(s2);
	if (!(result = ft_wstrnew(len)))
		return (NULL);
	result = ft_wstrcpy_nullcrashless(result, s1);
	result = ft_wstrcat_nullcrashless(result, s2);
	ft_wstrdel(&s1);
	return (result);
}
