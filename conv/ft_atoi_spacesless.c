/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_spacesless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 23:02:58 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/14 23:05:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_spacesless(const char *nptr)
{
	size_t		i;
	int			neg;
	int			result;

	i = 0;
	neg = 1;
	result = 0;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			neg = -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result = result * 10 + nptr[i++] - '0';
	return (result * neg);
}
