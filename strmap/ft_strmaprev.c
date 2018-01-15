/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmaprev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 11:14:23 by mapandel          #+#    #+#             */
/*   Updated: 2018/01/15 05:09:31 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmaprev(char **m)
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
	return (dup);
}
