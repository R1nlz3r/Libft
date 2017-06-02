/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 17:16:53 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/02 18:58:56 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabrev(t_tab *t)
{
	t_tab		*dup;
	int			tmp;
	size_t		start;
	size_t		end;

	start = 0;
	end = t->size - 1;
	if (!t->size || !(dup = ft_tabdup(t)))
		return (NULL);
	while (start < end)
	{
		tmp = dup->tab[start];
		dup->tab[start++] = dup->tab[end];
		dup->tab[end--] = tmp;
	}
	return (dup);
}
