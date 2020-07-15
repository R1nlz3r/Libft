/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 23:32:42 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 03:57:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
**	ft_tabrotate: table rotate
**		Moves all the int values of a t_tab* int* table
**		One step from the bottom to the top of the index
**		NULL behaviors are handled but the length and size should be correct
*/

t_tab		*ft_tabrotate(t_tab *t)
{
	int		tmp;
	int		tmp2;
	size_t	i;

	i = 1;
	if (!t || !t->tab || !t->len || t->size < t->len)
		return (t);
	tmp = t->tab[0];
	t->tab[0] = t->tab[t->len - 1];
	while (i < t->len)
	{
		tmp2 = t->tab[i];
		t->tab[i++] = tmp;
		tmp = tmp2;
	}
	return (t);
}
