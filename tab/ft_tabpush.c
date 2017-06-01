/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 02:09:03 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/02 01:37:52 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tabpush(t_tab *a, t_tab *b)
{
	if (!a->len || a->size <= a->len || b->size <= b->len)
		return ;
	b->tab[b->len++] = a->tab[a->len-- - 1];
}
