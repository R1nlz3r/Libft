/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 01:01:12 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/01 01:16:48 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabcpy(t_tab *dest, const t_tab *src)
{
	size_t i;

	i = 0;
	while (i < src->size)
	{
		dest->tab[i] = src->tab[i];
		++i;
	}
	return (dest);
}
