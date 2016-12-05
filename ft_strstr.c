/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:12:14 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/09 22:09:13 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t len;

	len = 0;
	if (!*little)
		return ((char*)(unsigned long)big);
	len = ft_strlen(little);
	while (*big)
	{
		if (*big == *little && (ft_memcmp(big, little, len) == 0))
			return ((char*)(unsigned long)big);
		big++;
	}
	return (NULL);
}
