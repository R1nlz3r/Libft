/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrev_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 18:59:06 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/03 01:36:11 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabrev_leakless(t_tab *t)
{
	t_tab		*dup;
	int			tmp;
	size_t		start;
	size_t		end;

	start = 0;
	end = t->len - 1;
	if (!t->len || !(dup = ft_tabdup(t)))
		return (NULL);
	while (start < end)
	{
		tmp = dup->tab[start];
		dup->tab[start++] = dup->tab[end];
		dup->tab[end--] = tmp;
	}
	ft_tabdel(&t);
	return (dup);
}
