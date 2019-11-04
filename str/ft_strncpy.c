/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:03:44 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/03 23:05:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strncpy: string number copy
**		Copies a const char* into a char* for a size_t length
**		The destination should be allocated properly to receive the data
**		If the length parameter stops the copy the destination will not be '\0'
**			terminated
**		If the copy is done before reaching length parameter, the left space is
**			filled with '\0'
**		NULL behaviors are handled
**		Returns the destination
*/

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (dest);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
