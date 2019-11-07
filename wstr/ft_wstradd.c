/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstradd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 02:49:40 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 20:26:47 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_wstradd: wide string addition
**		Adds a wchar_t at the end of a wchar_t const*
**		NULL behavior is handled
**		Returns this new wide string or NULL if the allocation failed
*/

wchar_t		*ft_wstradd(wchar_t const *ws1, wchar_t wc)
{
	size_t		len;
	wchar_t		*result;

	result = NULL;
	len = ft_wstrlen_nullcrashless(ws1) + 1;
	if (!(result = ft_wstrnew(len)))
		return (NULL);
	result = ft_wstrcpy_nullcrashless(result, ws1);
	result[len - 1] = wc;
	return (result);
}
