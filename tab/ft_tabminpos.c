/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabminpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 05:43:37 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 23:02:55 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

/*
**	ft_tabminpos: table minimum position
**		Finds the minimum int of a t_tab* int* table and returns its position
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the found position
*/

size_t		ft_tabminpos(t_tab *t)
{
	int		min;
	size_t	min_i;
	size_t	i;

	min_i = 0;
	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len)
		return (0);
	min = t->tab[0];
	while (i < t->len)
	{
		if (min > t->tab[i])
		{
			min = t->tab[i];
			min_i = i;
		}
		++i;
	}
	return (min_i);
}
