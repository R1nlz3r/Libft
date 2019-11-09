/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 14:45:54 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 12:22:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabnew: tab new
**		Allocates a t_tab* in memory and an int* for a given size_t length
**		Cleans all the data in that new tab
**		Initializes its size and length values
**		Returns it or a NULL value if an allocation failed
*/

t_tab			*ft_tabnew(size_t size)
{
	t_tab		*t;

	if (!(t = ft_memalloc(sizeof(t_tab)))
		|| !(t->tab = (int*)malloc(sizeof(int) * size)))
		return (NULL);
	t->size = size;
	t->len = 0;
	while (size)
		t->tab[--size] = 0;
	return (t);
}
