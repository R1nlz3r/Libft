/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 03:11:58 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:20 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strmap.h"

/*
** ft_strmapcat: string map concatenation
**		Copies a const char** at the end of a char**
**		The destination should be allocated properly to receive the data
**		Returns the destination or NULL if an allocation failed
*/

char	**ft_strmapcat(char **dest, const char **src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
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
