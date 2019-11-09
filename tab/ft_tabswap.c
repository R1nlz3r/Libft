/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 01:10:14 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/09 04:01:09 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabswap: table swap
**		Reverses the two last values of a t_tab* int* table
**		NULL behaviors are handled but the length and size should be correct
*/

t_tab		*ft_tabswap(t_tab *t)
{
	int		tmp;

	if (!t || !t->tab || t->size < t->len || t->len < 2)
		return (t);
	tmp = t->tab[t->len - 1];
	t->tab[t->len - 1] = t->tab[t->len - 2];
	t->tab[t->len - 2] = tmp;
	return (t);
}
