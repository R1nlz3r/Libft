/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 04:03:38 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:35 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmap.h"

/*
**	ft_strmapdup: string map duplicate
**		Duplicates a const char** into a new char**
**		The correct length is allocated then the data is then copied,
**			all the substrings are duplicated too
**		NULL behavior is handled
**		Returns this new string map or NULL if an allocation failed
*/

char	**ft_strmapdup(const char **m)
{
	char		**dup;
	size_t		i;

	i = 0;
	if (!m || !(dup = (char**)malloc(sizeof(char*) * (ft_strmaplen(m) + 1))))
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
