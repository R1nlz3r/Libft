/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapconcat_leakless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 09:25:24 by mapandel          #+#    #+#             */
/*   Updated: 2017/09/26 10:11:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapconcat_leakless(char **m, size_t size)
{
	char		**result;
	size_t		i;
	size_t		j;

	if (!(result = ft_memalloc(sizeof(char*) * (size + 1))))
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
	ft_memdel((void**)&m);
	return (result)
}
