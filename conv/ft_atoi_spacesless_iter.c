/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_spacesless_iter.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 13:38:44 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/19 19:07:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_spacesless_iter(const char *nptr, size_t *iter)
{
	int			neg;
	int			result;

	neg = 1;
	result = 0;
	if (nptr[*iter] == '+' || nptr[*iter] == '-')
		if (nptr[(*iter)++] == '-')
			neg = -1;
	while (nptr[*iter] >= '0' && nptr[*iter] <= '9')
		result = result * 10 + nptr[(*iter)++] - '0';
	return (result * neg);
}
