/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 04:39:09 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:36:48 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	ft_atoll: array to long long
**		Extracts a long long value from the data of a const char*
**		Allows spaces, tabs and newlines before parsing the number
**			and overflow on the result
*/

long long	ft_atoll(const char *nptr)
{
	size_t		i;
	int			neg;
	long long	result;

	i = 0;
	neg = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			neg = -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result = result * 10 + nptr[i++] - '0';
	return (result * neg);
}
