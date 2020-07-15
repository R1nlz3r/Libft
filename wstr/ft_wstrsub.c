/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:14:08 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 01:56:07 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
**	ft_wstrsub: wide string substitution
**		Duplicates and extracts the data of a const wchar_t*
**			starting at an unsigned int index for a size_t length
**		NULL behavior is handled but the length should be correct
**		Returns this new wide string or NULL if the allocation failed
*/

wchar_t			*ft_wstrsub(const wchar_t *ws, unsigned int start, size_t len)
{
	unsigned int	i;
	wchar_t			*cpy;

	i = 0;
	if (!ws || start > ft_wstrlen(ws) || !(cpy = ft_wstrnew(len)))
		return (NULL);
	while (i < len)
		cpy[i++] = ws[start++];
	return (cpy);
}
