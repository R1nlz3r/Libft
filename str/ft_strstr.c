/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:12:14 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:06:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strstr: string string
**		Searches a const char* in an other const char*
**		NULL behaviors are handled
**		Returns the first occurence of the searched string
**			or NULL if none was found
**		If the searched string do not contain data or is NULL,
**			returns the source string
*/

char	*ft_strstr(const char *big, const char *little)
{
	size_t len;

	len = 0;
	if (!big)
		return (NULL);
	if (!little || !*little)
		return ((char*)(unsigned long)big);
	len = ft_strlen(little);
	while (*big)
	{
		if (*big == *little && !(ft_memcmp(big, little, len)))
			return ((char*)(unsigned long)big);
		++big;
	}
	return (NULL);
}
