/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfindrev_overeq.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 02:36:51 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:12:56 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
**	ft_tabfindrev_overeq: table find reverse over equal
**		Finds an int or more than its value in a t_tab* int* table
**		The search starts from the end of the table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the distance from the end of the table
*/

size_t		ft_tabfindrev_overeq(t_tab *t, int n)
{
	size_t	i;
	size_t	count;

	count = 0;
	if (!t || !t->tab || !t->len || t->size < t->len)
		return (0);
	i = t->len - 1;
	while (i && t->tab[i] < n && ++count)
		--i;
	if (!i && t->tab[i] < n)
		return (0);
	return (count);
}
