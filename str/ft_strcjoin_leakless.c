/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin_leakless.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 14:34:17 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:34 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strcjoin_leakless: string character join leakless
**		Creates a char* from the concatenation of a char* and a char const*
**		The copy of the second source parameter stops
**			at the first encounter of a char
**		Frees up the first source parameter char*
**		NULL behaviors are handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strcjoin_leakless(char *s1, char const *s2, char c)
{
	size_t		len;
	char		*result;

	result = NULL;
	len = ft_strlen_nullcrashless(s1);
	len += ft_strclen_nullcrashless(s2, c);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strccat_nullcrashless(result, s2, c);
	ft_strdel(&s1);
	return (result);
}
