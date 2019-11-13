/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:26:24 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:05:10 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
** ft_strncat: string number concatenation
**		Copies a const char* at the end of a char*
**		The copy runs for a size_t length on the source
**		Returns the destination
*/

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!n)
		return (dest);
	while (dest[i])
		++i;
	while (j < n && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
