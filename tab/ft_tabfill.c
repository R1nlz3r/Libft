/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 09:27:50 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/01 18:02:20 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabfill(t_tab *t, int n, size_t size)
{
	if (size > t->len)
		t->len = size;
	while (size)
		t->tab[--size] = n;
	return (t);
}
