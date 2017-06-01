/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 14:45:54 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/01 17:40:54 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
