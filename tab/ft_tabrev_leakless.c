/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrev_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 18:59:06 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 02:59:20 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
**	ft_tabrev_leakless: table reversion leakless
**		Duplicates a t_tab* and reverses its int* table of data
**		Frees up the t_tab* source
**		NULL behaviors are handled
**		Returns this new t_tab* or NULL if an allocation failed
*/

t_tab		*ft_tabrev_leakless(t_tab *t)
{
	t_tab		*dup;
	int			tmp;
	size_t		start;
	size_t		end;

	start = 0;
	end = t->len - 1;
	if (!t->len || !(dup = ft_tabdup(t)))
		return (NULL);
	while (start < end)
	{
		tmp = dup->tab[start];
		dup->tab[start++] = dup->tab[end];
		dup->tab[end--] = tmp;
	}
	ft_tabdel(&t);
	return (dup);
}
