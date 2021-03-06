/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabisdescending.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 17:12:22 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:45:06 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_tabisdescending: table is descending
**		Checks all the int numbers in a int* for a size_t length (all part of
**			the t_tab structure)
**		Verifies if the numbers are arranged in the descending order
**		NULL behaviors are handled but length should be set and up to date
*/

int		ft_tabisdescending(t_tab *t)
{
	size_t		i;

	i = 0;
	if (!t || !t->tab || t->len < 1)
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
