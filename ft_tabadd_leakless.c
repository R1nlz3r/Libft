/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 01:19:33 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/01 03:55:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_tabadd_leakless(int *t, int i)
{
	size_t		len;
	int			*result;

	len = 0;
	result = NULL;
	if (!t)
		return (NULL);
	len = ft_tablen(t) + 2;
	if (!(result = ft_tabnew(len)))
		return (NULL);
	result = ft_tabncpy(result, t, len - 2);
	result[len - 1] = i;
	result[len] = 0;
	ft_memdel((void**)&t);
	return (result);
}
