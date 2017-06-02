/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 23:32:42 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/02 06:54:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabrotate(t_tab *t)
{
	int		tmp;
	int		tmp2;
	size_t	i;

	i = 1;
	if (!t || !t->len || t->size < t->len)
		return (t);
	tmp = t->tab[0];
	t->tab[0] = t->tab[t->len - 1];
	while (i < t->len)
	{
		tmp2 = t->tab[i];
		t->tab[i++] = tmp;
		tmp = tmp2;
	}
	return (t);
}
