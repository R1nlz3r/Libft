/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfindpos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 02:36:51 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/21 03:15:09 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_tabfindpos(t_tab *t, int n)
{
	size_t	i;

	i = 0;
	if (!t || !t->len || t->size < t->len)
		return (0);
	while (i < t->len && t->tab[i] != n)
		++i;
	if (i == t->len)
		return (0);
	return (i);
}
