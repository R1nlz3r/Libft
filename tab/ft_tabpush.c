/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 02:09:03 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 01:11:55 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabpush: table push
**		Moves the last int from an int* table to another
**		All under t_tab* stucture, lengths values are updated too in consequence
**		The function do not return a value
*/

void		ft_tabpush(t_tab *a, t_tab *b)
{
	if (!a->len || a->size < a->len || b->size <= b->len)
		return ;
	b->tab[b->len++] = a->tab[a->len-- - 1];
}
