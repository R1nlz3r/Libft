/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:01:48 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 20:55:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
**	ft_wstrfill: wide string fill
**		Fills a wchar_t* with a wchar_t for a size_t length
**		NULL behavior is handled but the size should be correct
*/

wchar_t			*ft_wstrfill(wchar_t *ws, wchar_t wc, size_t size)
{
	size_t		i;

	i = 0;
	if (!ws)
		return (NULL);
	while (i < size)
		ws[i++] = wc;
	return (ws);
}
