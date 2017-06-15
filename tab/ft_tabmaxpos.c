/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmaxpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 05:38:30 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/15 05:43:27 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_tabmaxpos(t_tab *t)
{
	size_t	i;
	int		max;

	i = 0;
	if (!t || !t->len || t->size < t->len)
		return (0);
	max = ft_tabmax(t);
	while (t->tab[i] != max)
		++i;
	return (i);
}
