/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmaprev_leakless.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 03:55:39 by mapandel          #+#    #+#             */
/*   Updated: 2018/01/15 05:09:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmaprev_leakless(char **m)
{
	char		**dup;
	char		*tmp;
	size_t		start;
	size_t		end;

	if (!(dup = ft_strmapdup((const char**)(unsigned long)m)))
		return (NULL);
	start = 0;
	end = ft_strmaplen_nullcrashless((const char**)(unsigned long)dup) - 1;
	while (dup[start] && start < end)
	{
		tmp = dup[start];
		dup[start++] = dup[end];
		dup[end--] = tmp;
	}
	ft_strmapdel(&m);
	return (dup);
}
