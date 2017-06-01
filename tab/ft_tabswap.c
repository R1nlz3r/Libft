/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 01:10:14 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/02 01:31:08 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabswap(t_tab *t)
{
	int		tmp;

	if (t->size < t->len || t->len < 2)
		return (t);
	tmp = t->tab[t->len - 1];
	t->tab[t->len - 1] = t->tab[t->len - 2];
	t->tab[t->len - 2] = tmp;
	return (t);
}
