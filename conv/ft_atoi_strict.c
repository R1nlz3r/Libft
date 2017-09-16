/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 21:00:49 by mapandel          #+#    #+#             */
/*   Updated: 2017/09/16 09:28:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_atoi_strict(const char *nptr)
{
	size_t	zero;
	size_t	len;
	size_t	i;

	zero = 0;
	if (!nptr[0]
		|| !((ft_isdigit(nptr[0]) || nptr[0] == '+'
		|| nptr[0] == '-') && (ft_strisdigit(&nptr[1])
		|| (!nptr[1] && ft_isdigit(nptr[0])))))
		return (10000000000);
	len = ft_strlen(nptr);
	if ((i = 1) && nptr[0] == '0')
		++zero;
	while (i < len && nptr[i++] == '0')
		++zero;
	if (len > 11 + zero
		|| (len == 11 + zero && ft_isdigit(nptr[0]))
		|| (len == 10 + zero
		&& ft_strcmp(nptr, "2147483647") > 0)
		|| (len == 11 + zero && nptr[0] == '+'
		&& ft_strcmp(&nptr[1 + zero], "2147483647") > 0)
		|| (len == 11 + zero && nptr[0] == '-'
		&& ft_strcmp(&nptr[1 + zero], "2147483648") > 0))
		return (10000000000);
	return ((int)ft_atoi(nptr));
}
