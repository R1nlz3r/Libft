/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax_underone.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 04:55:14 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/16 05:30:42 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabmax_underone(t_tab *t)
{
	int		max;
	int		under;
	size_t	i;

	i = 0;
	if (!t || t->len < 2 || t->size < t->len)
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
