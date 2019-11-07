/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapcpy_nullcrashless.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 03:04:11 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 01:24:35 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strmapcpy_nullcrashless: string map copy null crashless
**		Copies a const char** into a char**
**		The destination should be allocated properly to receive the data
**		All the substrings are duplicated
**		NULL behaviors are handled
**		Returns the destination or NULL if an allocation failed
*/

char	**ft_strmapcpy_nullcrashless(char **dest, const char **src)
{
	size_t i;

	i = 0;
	if (!src || !dest)
		return (dest);
	while (src[i])
	{
		if (!(dest[i] = ft_strdup(src[i])))
			return (NULL);
		++i;
	}
	dest[i] = NULL;
	return (dest);
}
