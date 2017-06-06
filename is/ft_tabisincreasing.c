/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabisincreasing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 06:33:05 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/06 06:34:34 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabisincreasing(t_tab *t)
{
	size_t		i;

	i = 0;
	if (t->len < 2)
		return (0);
	while (i < t->len - 1)
	{
		if (t->tab[i] > t->tab[i + 1])
			return (0);
		++i;
	}
	return (1);
}
