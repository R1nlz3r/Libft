/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:49:00 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:05:52 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strnstr: string number string
**		Searches a const char* in an other const char* for a size_t length
**		NULL behaviors are handled
**		Returns the first occurence of the searched string
**			or NULL if none was found
**		If the searched string do not contain data or is NULL,
**			returns the source string
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t lenlittle;

	lenlittle = 0;
	if (!big)
		return (NULL);
	if (!(lenlittle = ft_strlen_nullcrashless(little)))
		return ((char*)(unsigned long)big);
	while (*big && len >= lenlittle)
	{
		if (*big == *little && !(ft_memcmp(big, little, lenlittle)))
			return ((char*)(unsigned long)big);
		++big;
		--len;
	}
	return (NULL);
}
