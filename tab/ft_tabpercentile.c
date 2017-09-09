/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabpercentile.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 05:58:58 by mapandel          #+#    #+#             */
/*   Updated: 2017/09/09 07:09:01 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double			ft_tabpercentile(t_tab *t, int percentile)
{
	t_tab	*sort;
	double	result;
	size_t	i;

	i = 0;
	if (!t->len || percentile < 1 || percentile > 99)
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
