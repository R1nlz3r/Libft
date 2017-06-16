/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabminpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 05:43:37 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/16 05:45:52 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_tabminpos(t_tab *t)
{
	int		min;
	size_t	min_i;
	size_t	i;

	min_i = 0;
	i = 0;
	if (!t || !t->len || t->size < t->len)
		return (0);
	min = t->tab[0];
	while (i < t->len)
	{
		if (min > t->tab[i])
		{
			min = t->tab[i];
			min_i = i;
		}
		++i;
	}
	return (min_i);
}
