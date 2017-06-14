/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 03:11:08 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/14 03:17:38 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabmin(t_tab *t)
{
	int		min;
	size_t	i;

	i = 0;
	if (!t || !t->len || t->size < t->len)
		return (0);
	min = t->tab[0];
	while (i < t->len)
	{
		if (min > t->tab[i])
			min = t->tab[i];
		++i;
	}
	return (min);
}
