/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 03:17:55 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 21:51:08 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
**	ft_tabmax: table maximum
**		Finds the maximum int of a t_tab* int* table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the extracted int
*/

int		ft_tabmax(t_tab *t)
{
	int		max;
	size_t	i;

	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len)
		return (0);
	max = t->tab[0];
	while (i < t->len)
	{
		if (max < t->tab[i])
			max = t->tab[i];
		++i;
	}
	return (max);
}
