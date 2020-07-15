/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccat_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 04:49:45 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:10 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** ft_strccat_nullcrashless: string character concatenation null crashless
**		Copies a const char* at the end of a char* while a char is not found
**		The destination should be allocated properly to receive the data
**		NULL behaviors are handled
**		Returns the destination
*/

char	*ft_strccat_nullcrashless(char *dest, const char *src, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (dest);
	while (dest[i])
		++i;
	while (src[j] && src[j] != c)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
