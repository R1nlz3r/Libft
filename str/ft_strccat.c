/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 12:36:12 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:14 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** ft_strccat: string character concatenation
**		Copies a const char* at the end of a char* while a char is not found
**		The destination should be allocated properly to receive the data
**		Returns the destination
*/

char	*ft_strccat(char *dest, const char *src, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j] && src[j] != c)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
