/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstradd_leakless.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 04:27:44 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 20:54:04 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
**	ft_wstradd_leakless: wide string addition leakless
**		Adds a wchar_t at the end of a wchar_t*
**		Frees up the wchar_t* source
**		NULL behavior is handled
**		Returns this new wide string or NULL if the allocation failed
*/

wchar_t		*ft_wstradd_leakless(wchar_t *ws1, wchar_t wc)
{
	size_t		len;
	wchar_t		*result;

	result = NULL;
	len = ft_wstrlen_nullcrashless(ws1) + 1;
	if (!(result = ft_wstrnew(len)))
		return (NULL);
	result = ft_wstrcpy_nullcrashless(result, ws1);
	result[len - 1] = wc;
	ft_wstrdel(&ws1);
	return (result);
}
