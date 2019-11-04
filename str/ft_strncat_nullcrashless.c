/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 00:51:34 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/03 22:50:56 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strncat_nullcrashless: string number concatenation null crashless
**		Copies a const char* at the end of a char*
**		The copy runs for a size_t length on the source
**		NULL behaviors are handled
**		Returns the destination
*/

char	*ft_strncat_nullcrashless(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!n || !dest || !src)
		return (dest);
	while (dest[i])
		++i;
	while (j < n && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
