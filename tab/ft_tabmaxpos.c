/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmaxpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 05:38:30 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 23:58:52 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabmaxpos: table maximum position
**		Finds the maximum int of a t_tab* int* table and returns its position
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the found position
*/

size_t		ft_tabmaxpos(t_tab *t)
{
	int		max;
	size_t	max_i;
	size_t	i;

	max_i = 0;
	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len)
		return (0);
	max = t->tab[0];
	while (i < t->len)
	{
		if (max < t->tab[i])
		{
			max = t->tab[i];
			max_i = i;
		}
		++i;
	}
	return (max_i);
}
