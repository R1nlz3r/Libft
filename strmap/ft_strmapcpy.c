/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 02:30:45 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/18 03:08:17 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
