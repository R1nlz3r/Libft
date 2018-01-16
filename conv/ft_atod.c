/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 02:39:37 by mapandel          #+#    #+#             */
/*   Updated: 2018/01/16 07:32:09 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

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
