/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 02:39:37 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:36:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
** ft_atod: array to double
**		Converts an array of const char* to a double
**		The delimiter for the floating point number is a '.'
**		The convertion stops when the last digit is found
*/

double		ft_atod(const char *nptr)
{
	long long	ent;
	long long	deci;
	int			pow;

	deci = 0;
	pow = 0;
	ent = ft_atoll(nptr);
	if (ft_strchr(nptr, '.'))
	{
		deci = ft_atoll(ft_strchr(nptr, '.') + 1);
		pow = (int)ft_strlen_nullcrashless(ft_strchr(nptr, '.') + 1);
	}
	if (ent > 0)
		return (ent + deci / ft_pow(10, pow));
	return (ent - deci / ft_pow(10, pow));
}
