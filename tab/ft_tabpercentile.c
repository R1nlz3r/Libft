/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabpercentile.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 05:58:58 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 21:50:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
**	ft_tabpercentile: table percentile
**		Finds the value that splits an int* table at its int percent length
**		For example a given percentile parameter of fivety would output
**			the middle value (ranged in increasing order) of that table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the extracted int
*/

double			ft_tabpercentile(t_tab *t, int percentile)
{
	t_tab	*sort;
	double	result;
	size_t	i;

	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len
		|| percentile < 1 || percentile > 99)
		return (0);
	sort = ft_tabdup(t);
	ft_qsort(sort);
	while ((double)i + 1 < (sort->len * (unsigned long)percentile) / (double)100
		&& i < sort->size - 1)
		++i;
	result = sort->tab[i];
	ft_tabdel(&sort);
	return (result);
}
