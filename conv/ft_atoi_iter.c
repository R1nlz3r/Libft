/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_iter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 13:27:20 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/23 22:50:52 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_atoi_iter: array to integer
**		Converts a const char* to an integer
**		The convertion starts at the index iter of the string
**		It stops when the last digit is found
*/

int		ft_atoi_iter(const char *nptr, size_t *iter)
{
	int			neg;
	int			result;

	neg = 1;
	result = 0;
	while (ft_isspace(nptr[*iter]))
		(*iter)++;
	if (nptr[*iter] == '+' || nptr[*iter] == '-')
		if (nptr[(*iter)++] == '-')
			neg = -1;
	while (nptr[*iter] >= '0' && nptr[*iter] <= '9')
		result = result * 10 + nptr[(*iter)++] - '0';
	return (result * neg);
}
