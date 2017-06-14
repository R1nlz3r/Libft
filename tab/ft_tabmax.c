/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 03:17:55 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/14 03:18:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabmax(t_tab *t)
{
	int		max;
	size_t	i;

	i = 0;
	if (!t || !t->len || t->size < t->len)
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
