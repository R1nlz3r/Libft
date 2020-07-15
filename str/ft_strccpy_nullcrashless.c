/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 05:15:16 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** ft_strccpy_nullcrashless: string character copy null crashless
**		Copies a const char* into a char*
**		The copy runs stops before the first encounter of a char
**		The destination should be allocated properly to receive the data
**		NULL behaviors are handled
**		Returns the destination
*/

char	*ft_strccpy_nullcrashless(char *dest, const char *src, char c)
{
	size_t i;

	i = 0;
	if (!src || !dest)
		return (dest);
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
