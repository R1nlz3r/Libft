/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub_leakless.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:16:24 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 01:59:19 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wstr.h"

/*
**	ft_wstrsub_leakless: wide string substitution leakless
**		Duplicates and extracts the data of a const wchar_t*
**			starting at an unsigned int index for a size_t length
**		Frees up the wchar_t* source
**		NULL behavior is handled but the length should be correct
**		Returns this new wide string or NULL if the allocation failed
*/

wchar_t			*ft_wstrsub_leakless(wchar_t *ws, unsigned int start,
	size_t len)
{
	unsigned int	i;
	wchar_t			*cpy;

	i = 0;
	if (!ws || start > ft_wstrlen(ws) || !(cpy = ft_wstrnew(len)))
		return (NULL);
	while (i < len)
		cpy[i++] = ws[start++];
	ft_wstrdel(&ws);
	return (cpy);
}
