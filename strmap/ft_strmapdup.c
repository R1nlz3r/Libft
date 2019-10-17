/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 04:03:38 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/18 01:06:06 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapdup(const char **m)
{
	char		**dup;
	size_t		i;

	i = 0;
	if (!(dup = (char**)malloc(sizeof(char*) *
		(ft_strmaplen_nullcrashless(m) + 1))))
		return (NULL);
	while (m[i])
	{
		if (!(dup[i] = ft_strdup(m[i])))
			return (NULL);
		++i;
	}
	dup[i] = NULL;
	return (dup);
}
