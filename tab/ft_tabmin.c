/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 03:11:08 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 21:51:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabmin: table minimum
**		Finds the minimum int of a t_tab* int* table
**		NULL behaviors are handled but the length and size should be correct
**		Returns 0 to express an error or the extracted int
*/

int		ft_tabmin(t_tab *t)
{
	int		min;
	size_t	i;

	i = 0;
	if (!t || !t->tab || !t->len || t->size < t->len)
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
