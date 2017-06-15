/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabisdescending.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 17:12:22 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/15 22:45:29 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabisdescending(t_tab *t)
{
	size_t		i;

	i = 0;
	if (t->len < 1)
		return (0);
	else if (t->len == 1)
		return (1);
	while (i < t->len - 1)
	{
		if (t->tab[i] < t->tab[i + 1])
			return (0);
		++i;
	}
	return (1);
}
