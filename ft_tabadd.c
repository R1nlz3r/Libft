/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 00:48:08 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/01 03:39:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_tabadd(int const *t, int i)
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
	return (result);
}
