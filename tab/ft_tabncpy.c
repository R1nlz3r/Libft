/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 03:37:31 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/01 17:58:03 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabncpy(t_tab *dest, const t_tab *src, size_t n)
{
	size_t i;

	i = 0;
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
