/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 01:01:12 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:12:10 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
** ft_tabcpy: table copy
**		Copies a const t_tab* into a t_tab*
**		The destination should be allocated properly to receive the data
**		NULL behaviors are handled but the length and sizes should be correct
**		Returns the destination
*/

t_tab		*ft_tabcpy(t_tab *dest, const t_tab *src)
{
	size_t i;

	i = 0;
	if (!src || !src->tab || src->size < src->len
		|| !dest || !dest->tab || dest->size || dest->len)
		return (dest);
	while (i < src->len)
	{
		dest->tab[i] = src->tab[i];
		++i;
	}
	if (src->len > dest->len)
		dest->len = src->len;
	return (dest);
}
