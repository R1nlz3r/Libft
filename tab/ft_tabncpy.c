/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 03:37:31 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 21:49:05 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

/*
** ft_tabcpy: table copy
**		Copies a const t_tab* into a t_tab*
**		The destination should be allocated properly to receive the data
**		If the copy is done before reaching length parameter, the left space is
**			filled with zeros
**		NULL behaviors are handled but the length and sizes should be correct
**		Returns the destination
*/

t_tab		*ft_tabncpy(t_tab *dest, const t_tab *src, size_t n)
{
	size_t i;

	i = 0;
	if (!src || !src->tab || src->size < src->len
		|| !dest || !dest->tab || dest->size || dest->len)
		return (dest);
	while (i < n && i < src->len)
	{
		dest->tab[i] = src->tab[i];
		++i;
	}
	while (i < n)
		dest->tab[i++] = 0;
	if (n > dest->len)
		dest->len = n;
	return (dest);
}
