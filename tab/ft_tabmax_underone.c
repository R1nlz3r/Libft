/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax_underone.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 04:55:14 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:13:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

/*
**	ft_tabmax_underone: table maximum under one
**		Finds the second maximum int of a t_tab* int* table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the extracted int
*/

int		ft_tabmax_underone(t_tab *t)
{
	int		max;
	int		under;
	size_t	i;

	i = 0;
	if (!t || !t->tab || t->len < 2 || t->size < t->len)
		return (0);
	max = t->tab[0];
	under = t->tab[1];
	while (i < t->len)
	{
		if (max < t->tab[i])
		{
			under = max;
			max = t->tab[i];
		}
		else if (under < t->tab[i])
			under = t->tab[i];
		++i;
	}
	return (under);
}
