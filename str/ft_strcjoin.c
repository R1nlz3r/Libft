/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 12:25:29 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strcjoin: string character join
**		Creates a char* from the concatenation of two char const*
**		The copy of the second source parameter stops
**			at the first encounter of a char
**		NULL behaviors are handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strcjoin(char const *s1, char const *s2, char c)
{
	size_t		len;
	char		*result;

	len = ft_strlen_nullcrashless(s1);
	len += ft_strclen_nullcrashless(s2, c);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strccat_nullcrashless(result, s2, c);
	return (result);
}
