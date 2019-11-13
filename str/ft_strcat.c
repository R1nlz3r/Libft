/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:16:21 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:06 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
** ft_strcat: string concatenation
**		Copies a const char* at the end of a char*
**		The destination should be allocated properly to receive the data
**		Returns the destination
*/

char	*ft_strcat(char *dest, const char *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
