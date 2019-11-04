/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:19:47 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/01 17:25:59 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strccpy: string character copy
**		Copies a const char* into a char*
**		The copy runs stops before the first encounter of a char
**		The destination should be allocated properly to receive the data
**		Returns the destination
*/

char	*ft_strccpy(char *dest, const char *src, char c)
{
	size_t i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
