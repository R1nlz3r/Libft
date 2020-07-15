/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_nullcrashless.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 04:39:25 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:03 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** ft_strcat_nullcrashless: string concatenation null crashless
**		Copies a const char* at the end of a char*
**		The destination should be allocated properly to receive the data
**		NULL behaviors are handled
**		Returns the destination
*/

char	*ft_strcat_nullcrashless(char *dest, const char *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (dest);
	while (dest[i])
		++i;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
