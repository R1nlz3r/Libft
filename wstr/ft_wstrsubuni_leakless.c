/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsubuni_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:16:24 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 01:59:56 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
**	ft_wstrsubuni_leakless: wide string substitution unicode leakless
**		Duplicates and extracts the data of a const wchar_t*
**			starting at an unsigned int index for a size_t length
**		The length should contain all the sub characters of those wide
**		Frees up the wchar_t* source
**		NULL behavior is handled but the length should be correct
**		Returns this new wide string or NULL if the allocation failed
*/

static size_t	ft_wstrsubuni_leakless2(wchar_t *ws, size_t i, size_t round)
{
	if (ws[i] < 128)
		++round;
	else if (ws[i] >= 128 && ws[i] < 2048)
		round += 2;
	else if (ws[i] >= 2048 && ws[i] < 65536)
		round += 3;
	else if (ws[i] >= 65536 && ws[i] <= 1114111)
		round += 4;
	return (round);
}

wchar_t			*ft_wstrsubuni_leakless(wchar_t *ws, unsigned int start,
	size_t len)
{
	unsigned int	i;
	wchar_t			*cpy;
	size_t			round;
	size_t			tmpround;

	i = 0;
	round = 0;
	tmpround = 0;
	if (!ws || start > ft_wstrlenuni(ws))
		return (NULL);
	while (ws[i] && round < len)
	{
		tmpround = round;
		round = ft_wstrsubuni_leakless2(ws, i++, round);
		if (round == len)
			tmpround = round;
	}
	if (!(cpy = ft_wstrnew(i)))
		return (NULL);
	i = 0;
	round = 0;
	while (round < tmpround && (round = ft_wstrsubuni_leakless2(ws, i, round)))
		cpy[i++] = ws[start++];
	ft_wstrdel(&ws);
	return (cpy);
}
