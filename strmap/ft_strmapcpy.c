/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 02:30:45 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:27 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmap.h"

/*
** ft_strmapcpy: string map copy
**		Copies a const char** into a char**
**		The destination should be allocated properly to receive the data
**		All the substrings are duplicated
**		Returns the destination or NULL if an allocation failed
*/

char	**ft_strmapcpy(char **dest, const char **src)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		if (!(dest[i] = ft_strdup(src[i])))
			return (NULL);
		++i;
	}
	dest[i] = NULL;
	return (dest);
}
