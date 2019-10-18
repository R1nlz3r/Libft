/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapcat_nullcrashless.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 03:19:39 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/18 03:22:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapcat_nullcrashless(char **dest, const char **src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (dest[i])
		++i;
	while (src && src[j]) {
		if (!(dest[i++] = ft_strdup(src[j++])))
			return (NULL);
	}
	dest[i] = NULL;
	return (dest);
}
