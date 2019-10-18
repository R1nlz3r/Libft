/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 03:11:58 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/18 03:17:07 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapcat(char **dest, const char **src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j]) {
		if (!(dest[i++] = ft_strdup(src[j++])))
			return (NULL);
	}
	dest[i] = NULL;
	return (dest);
}
