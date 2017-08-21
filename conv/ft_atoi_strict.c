/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 21:00:49 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/20 21:11:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_atoi_strict(const char *nptr)
{
	if (!nptr[0]
		|| !((ft_isdigit(nptr[0]) || nptr[0] == '+'
		|| nptr[0] == '-') && (ft_strisdigit(&nptr[1])
		|| (!nptr[1] && ft_isdigit(nptr[0]))))
		|| ft_strlen(nptr) > 11
		|| (ft_strlen(nptr) == 11 && ft_isdigit(nptr[0]))
		|| (ft_strlen(nptr) == 10
		&& ft_strcmp(nptr, "2147483647") > 0)
		|| (ft_strlen(nptr) == 11 && nptr[0] == '+'
		&& ft_strcmp(&nptr[1], "2147483647") > 0)
		|| (ft_strlen(nptr) == 11 && nptr[0] == '-'
		&& ft_strcmp(&nptr[1], "2147483648") > 0))
		return (10000000000);
	return ((int)ft_atoi(nptr));
}
