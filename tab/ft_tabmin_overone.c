/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmin_overone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 05:26:43 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 00:16:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabmin_overone: table minimum over one
**		Finds the second minimum int of a t_tab* int* table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the extracted int
*/

int		ft_tabmin_overone(t_tab *t)
{
	int		min;
	int		over;
	size_t	i;

	i = 0;
	if (!t || !t->tab || t->len < 2 || t->size < t->len)
		return (0);
	min = t->tab[0];
	over = t->tab[1];
	while (i < t->len)
	{
		if (min > t->tab[i])
		{
			over = min;
			min = t->tab[i];
		}
		else if (over > t->tab[i])
			over = t->tab[i];
		++i;
	}
	return (over);
}
