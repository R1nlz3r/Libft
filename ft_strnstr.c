/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:49:00 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/09 22:08:53 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t lenlittle;

	lenlittle = 0;
	if ((lenlittle = ft_strlen(little)) == 0)
		return ((char*)(unsigned long)big);
	while (*big && len >= lenlittle)
	{
		if (*big == *little && (ft_memcmp(big, little, lenlittle) == 0))
			return ((char*)(unsigned long)big);
		big++;
		len--;
	}
	return (NULL);
}
