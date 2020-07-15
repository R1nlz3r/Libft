/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfindpos_undereq.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 02:44:00 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:12:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
**	ft_tabfindpos_undereq: table find position under equal
**		Finds an int or less than its value in a t_tab* int* table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the found position
*/

size_t		ft_tabfindpos_undereq(t_tab *t, int n)
{
	size_t	i;

	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len)
		return (0);
	while (i < t->len && t->tab[i] > n)
		++i;
	if (i == t->len)
		return (0);
	return (i);
}
