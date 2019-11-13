/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 06:35:35 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:58:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

/*
**	ft_qsort: qwick sort
**		Sorts an int* with the qwick sort algorithm for a size_t length (all
**			part of the t_tab structure)
**		NULL behavior is handled but length should be set and up to date
**
**		Issue #1: Duplicate values are not handled by the function and result
**			in a timeout
*/

static void		ft_qsort_swap(t_tab *t, size_t a, size_t b)
{
	int		tmp;

	tmp = t->tab[a];
	t->tab[a] = t->tab[b];
	t->tab[b] = tmp;
}

static void		ft_qsort2(t_tab *t, size_t start, size_t end)
{
	size_t	min;
	size_t	max;
	int		pivot;

	min = start;
	max = end;
	pivot = t->tab[start];
	if (min >= max)
		return ;
	while (1)
	{
		while (t->tab[min] < pivot)
			++min;
		while (t->tab[max] > pivot)
			--max;
		if (min < max)
			ft_qsort_swap(t, min, max);
		else
			break ;
	}
	ft_qsort2(t, start, max);
	ft_qsort2(t, max + 1, end);
}

t_tab			*ft_qsort(t_tab *t)
{
	if (t && t->tab && t->len > 1)
		ft_qsort2(t, 0, t->len - 1);
	return (t);
}
