/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccat_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 04:49:45 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/02 04:50:31 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccat_nullcrashless(char *dest, const char *src, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (dest[i])
		++i;
	while (src && src[j] && src[j] != c)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
