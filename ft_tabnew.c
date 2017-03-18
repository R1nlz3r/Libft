/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 14:45:54 by mapandel          #+#    #+#             */
/*   Updated: 2017/03/18 15:06:56 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_tabnew(size_t size)
{
	size_t		i;
	int			*tab;

	i = 0;
	if (!(tab = (int*)malloc(size)))
		return (NULL);
	while (i < size)
		tab[i++] = 0;
	return (tab);
}
