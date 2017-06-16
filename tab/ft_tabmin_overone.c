/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmin_overone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 05:26:43 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/16 05:30:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabmin_overone(t_tab *t)
{
	int		min;
	int		over;
	size_t	i;

	i = 0;
	if (!t || t->len < 2 || t->size < t->len)
		return (0);
	min = t->tab[0];
	over = t->tab[1];
	while (i < t->len)
	{
		if (min > t->tab[i])
		{
			over = min;
			min = t->tab[i];
		}
		else if (over > t->tab[i])
			over = t->tab[i];
		++i;
	}
	return (over);
}
