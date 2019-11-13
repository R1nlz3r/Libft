/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:35:06 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:04:46 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
** ft_strlcat: string length concatenation
**		Copies a const char* at the end of a char*
**		The copy stops itself when the destination reaches a size_t length
**		NULL behaviors are handled
**		Returns a size_t length of the destination
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	if (!size || !dest)
		return (0);
	while (dest[i] && i < size)
		++i;
	j = i;
	if (!src)
		return (j);
	while (src[i - j] && i < (size - 1))
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
