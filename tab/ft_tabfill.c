/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 09:27:50 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:12:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

/*
**	ft_tabfill: table fill
**		Fills a int* table with an int for a size_t length
**		All under t_tab* stucture, length value is updated too in consequence
*/

t_tab		*ft_tabfill(t_tab *t, int n, size_t size)
{
	if (size > t->len)
		t->len = size;
	while (size)
		t->tab[--size] = n;
	return (t);
}
