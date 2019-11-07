/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapconcat_leakless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 09:25:24 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 18:51:18 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strmapconcat_leakless: string map contraction leakless
**		Removes NULL substrings in a char** for a size_t length
**		Frees up the char** source and all its substrings
**		NULL behavior is handled but the length should be correct
**		Returns this new string map or NULL an allocation failed
*/

char	**ft_strmapconcat_leakless(char **m, size_t size)
{
	char		**result;
	size_t		i;
	size_t		j;

	if (!m || !(result = ft_memalloc(sizeof(char*) * (size + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		if (m[i])
			result[j++] = ft_strdup(m[i]);
		ft_strdel(&m[i]);
		++i;
	}
	ft_strmapdel(&m);
	return (result);
}
