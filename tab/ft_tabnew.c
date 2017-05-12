/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 14:45:54 by mapandel          #+#    #+#             */
/*   Updated: 2017/05/05 12:08:37 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_tabnew(size_t size)
{
	size_t		i;
	int			*tab;

	i = 0;
	if (!(tab = (int*)malloc(sizeof(int) * (size + 1))))
		return (NULL);
	while (i <= size)
		tab[i++] = 0;
	return (tab);
}
