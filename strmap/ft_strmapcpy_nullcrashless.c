/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapcpy_nullcrashless.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 03:04:11 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/18 03:07:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapcpy_nullcrashless(char **dest, const char **src)
{
	size_t i;

	i = 0;
	if (!src)
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
