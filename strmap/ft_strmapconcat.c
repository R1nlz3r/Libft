/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapconcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 09:14:44 by mapandel          #+#    #+#             */
/*   Updated: 2017/09/28 11:16:06 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
