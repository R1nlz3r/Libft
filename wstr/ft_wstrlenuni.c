/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlenuni.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 00:40:36 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:20:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
**	ft_wstrlenuni: wide string length unicode
**		Counts the number of characters in all the wide characters
**			of a const wchar_t*
**		Null behavior is handled
**		Returns a size_t length
*/

size_t		ft_wstrlenuni(const wchar_t *ws)
{
	size_t	i;
	size_t	ret;

	i = 0;
	ret = 0;
	if (!ws)
		return (0);
	while (ws[i])
	{
		if ((ws[i] < 128) || (MB_CUR_MAX != 4 && ws[i] >= 128 && ws[i] < 256))
			++ret;
		else if (ws[i] >= 128 && ws[i] < 2048)
			ret += 2;
		else if (ws[i] >= 2048 && ws[i] < 65536)
			ret += 3;
		else if (ws[i] >= 65536 && ws[i] <= 1114111)
			ret += 4;
		++i;
	}
	return (ret);
}
