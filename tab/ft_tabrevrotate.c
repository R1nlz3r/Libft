/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrevrotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Updated: 2017/06/02 00:52:00 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/02 00:52:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabrevrotate(t_tab *t)
{
	int		tmp;
	int		tmp2;
	size_t	i;

	i = t->len - 1;
	if (!t || !t->len || t->size < t->len)
		return (t);
	tmp = t->tab[t->len - 1];
	while (i)
	{
		tmp2 = t->tab[i - 1];
		t->tab[i-- - 1] = tmp;
		tmp = tmp2;
	}
	t->tab[t->len - 1] = tmp;
	return (t);
}
