/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmedian.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 18:12:34 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/06 18:34:04 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_tabmedian(t_tab *t)
{
	t_tab	*sort;
	int		result;
	size_t	i;

	i = 0;
	if (!t->len)
		return (0);
	sort = ft_tabdup(t);
	ft_qsort(sort);
	while (i < sort->len / 2)
		++i;
	if (sort->len % 2)
		result = sort->tab[i];
	else
		result = (sort->tab[i] + sort->tab[i + 1]) / 2;
	ft_tabdel(&sort);
	return (result);
}
