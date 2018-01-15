/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 04:03:38 by mapandel          #+#    #+#             */
/*   Updated: 2018/01/15 05:06:52 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapdup(const char **m)
{
	char		**dup;
	size_t		i;

	i = 0;
	if (!(dup = (char**)malloc(sizeof(char*) * (ft_strmaplen(m) + 1))))
		return (NULL);
	while (m[i])
	{
		if (!(dup[i] = ft_strdup(m[i])))
			return (NULL);
		++i;
	}
	m[i] = NULL;
	return (dup);
}
