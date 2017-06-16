/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmaxpos_underone.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 05:41:28 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/16 11:20:54 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_tabmaxpos_underone2(t_tab *t, size_t i, size_t max_i,
	size_t under_i)
{
	int		max;
	int		under;

	max = t->tab[0];
	under = t->tab[1];
	while (i < t->len)
	{
		if (max < t->tab[i])
		{
			under = max;
			max = t->tab[i];
			under_i = max_i;
			max_i = i;
		}
		else if (under < t->tab[i])
		{
			under = t->tab[i];
			under_i = i;
		}
		++i;
	}
	return (under_i);
}

size_t				ft_tabmaxpos_underone(t_tab *t)
{
	size_t	i;
	size_t	max_i;
	size_t	under_i;

	i = 0;
	max_i = 0;
	under_i = 1;
	if (!t || t->len < 2 || t->size < t->len)
		return (0);
	return (ft_tabmaxpos_underone2(t, i, max_i, under_i));
}
