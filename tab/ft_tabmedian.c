/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmedian.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 18:12:34 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 01:07:25 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabpercentile: table median
**		Finds the median value of an int* table from a t_tab*
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the extracted double
*/

double			ft_tabmedian(t_tab *t)
{
	t_tab	*sort;
	double	result;
	size_t	i;

	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len || !(sort = ft_tabdup(t)))
		return (0);
	ft_qsort(sort);
	while (i < sort->len / 2)
		++i;
	if (sort->len % 2)
		result = sort->tab[i];
	else
		result = (sort->tab[i] + sort->tab[i - 1]) / 2;
	ft_tabdel(&sort);
	return (result);
}
