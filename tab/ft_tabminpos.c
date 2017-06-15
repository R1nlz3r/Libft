/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabminpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 05:43:37 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/15 05:44:11 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_tabminpos(t_tab *t)
{
	size_t	i;
	int		min;

	i = 0;
	if (!t || !t->len || t->size < t->len)
		return (0);
	min = ft_tabmin(t);
	while (t->tab[i] != min)
		++i;
	return (i);
}
