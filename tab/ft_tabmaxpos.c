/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmaxpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 05:38:30 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/16 11:06:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_tabmaxpos(t_tab *t)
{
	int		max;
	size_t	max_i;
	size_t	i;

	max_i = 0;
	i = 0;
	if (!t || !t->len || t->size < t->len)
		return (0);
	max = t->tab[0];
	while (i < t->len)
	{
		if (max < t->tab[i])
		{
			max = t->tab[i];
			max_i = i;
		}
		++i;
	}
	return (max_i);
}
