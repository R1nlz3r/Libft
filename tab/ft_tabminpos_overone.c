/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabminpos_overone.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 10:32:54 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 00:14:05 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

/*
**	ft_tabminpos_overone: table minimum position over one
**		Finds the second minimum int of a t_tab* int* table
**			and returns its position
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the found position
*/

static size_t		ft_tabminpos_overone2(t_tab *t, size_t i, size_t min_i,
	size_t over_i)
{
	int		min;
	int		over;

	min = t->tab[0];
	over = t->tab[1];
	while (i < t->len)
	{
		if (min > t->tab[i])
		{
			over = min;
			min = t->tab[i];
			over_i = min_i;
			min_i = i;
		}
		else if (over > t->tab[i])
		{
			over = t->tab[i];
			over_i = i;
		}
		++i;
	}
	return (over_i);
}

size_t				ft_tabminpos_overone(t_tab *t)
{
	size_t	i;
	size_t	min_i;
	size_t	over_i;

	i = 0;
	min_i = 0;
	over_i = 1;
	if (!t || !t->tab || t->len < 2 || t->size < t->len)
		return (0);
	return (ft_tabminpos_overone2(t, i, min_i, over_i));
}
