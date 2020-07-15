/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfindpos_under.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 02:44:32 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:12:38 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
**	ft_tabfindpos_under: table find position under
**		Finds a strictly less value than an int in a t_tab* int* table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the found position
*/

size_t		ft_tabfindpos_under(t_tab *t, int n)
{
	size_t	i;

	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len)
		return (0);
	while (i < t->len && t->tab[i] >= n)
		++i;
	if (i == t->len)
		return (0);
	return (i);
}
