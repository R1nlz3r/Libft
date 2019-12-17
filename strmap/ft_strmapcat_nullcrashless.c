/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapcat_nullcrashless.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 03:19:39 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:13 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmap.h"

/*
** ft_strmapcat_nullcrashless: string map concatenation null crashless
**		Copies a const char** at the end of a char**
**		The destination should be allocated properly to receive the data
**		NULL behaviors are handled
**		Returns the destination or NULL if an allocation failed
*/

char	**ft_strmapcat_nullcrashless(char **dest, const char **src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (NULL);
	while (dest[i])
		++i;
	while (src[j])
	{
		if (!(dest[i++] = ft_strdup(src[j++])))
			return (NULL);
	}
	dest[i] = NULL;
	return (dest);
}
