/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:34:05 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:36:44 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
**	ft_atoi: array to integer
**		Extracts an int value from the data of a const char*
**		Allows spaces, tabs and newlines before parsing the number
**			and overflow on the result
*/

int		ft_atoi(const char *nptr)
{
	size_t		i;
	int			neg;
	int			result;

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
