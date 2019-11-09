/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfindpos_overeq.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 02:44:00 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 03:41:18 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabfindpos_overeq: table find position over equal
**		Finds an int or more than its value in a t_tab* int* table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the found position
*/

size_t		ft_tabfindpos_overeq(t_tab *t, int n)
{
	size_t	i;

	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len)
		return (0);
	while (i < t->len && t->tab[i] < n)
		++i;
	if (i == t->len)
		return (0);
	return (i);
}
