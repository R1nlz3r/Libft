/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapconcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 09:14:44 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 18:49:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strmapconcat: string map contraction
**		Removes NULL substrings in a char** for a size_t length
**		NULL behavior is handled but the length should be correct
**		Returns this new string map or NULL an allocation failed
*/

char	**ft_strmapconcat(char **m, size_t size)
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
		++i;
	}
	return (result);
}
