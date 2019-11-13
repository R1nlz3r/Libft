/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 17:16:53 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 03:10:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

/*
**	ft_tabrev: table reversion
**		Duplicates a t_tab* and reverses its int* table of data
**		NULL behaviors are handled
**		Returns this new t_tab* or NULL if an allocation failed
*/

t_tab		*ft_tabrev(t_tab *t)
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
	return (dup);
}
