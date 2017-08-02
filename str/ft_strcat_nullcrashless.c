/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_nullcrashless.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 04:39:25 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/02 04:44:35 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat_nullcrashless(char *dest, const char *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (dest[i])
		++i;
	while (src && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
