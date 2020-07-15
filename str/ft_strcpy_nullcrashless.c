/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_nullcrashless.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 05:03:22 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:59 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** ft_strcpy_nullcrashless: string copy null crashless
**		Copies a const char* into a char*
**		The destination should be allocated properly to receive the data
**		NULL behaviors are handled
**		Returns the destination
*/

char	*ft_strcpy_nullcrashless(char *dest, const char *src)
{
	size_t i;

	i = 0;
	if (!src || !dest)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
