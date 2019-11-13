/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapjoin_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 02:26:09 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:38 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmap.h"

/*
**	ft_strmapjoin_leakless: string join
**		Creates a char** from the concatenation of two char const**
**		Frees up the first source parameter char** and all its substrings
**		NULL behaviors are handled
**		Returns this new string map or NULL if the allocation failed
*/

char	**ft_strmapjoin_leakless(char **m1, char const **m2)
{
	size_t		len;
	char		**result;

	len = ft_strmaplen_nullcrashless((const char**)(unsigned long)m1);
	len += ft_strmaplen_nullcrashless((const char**)(unsigned long)m2);
	if (!(result = ft_strmapnew(len)))
		return (NULL);
	if (!(result = ft_strmapcpy_nullcrashless(result, (const char**)
		(unsigned long)m1)))
		return (NULL);
	result = ft_strmapcat_nullcrashless(result, m2);
	ft_strmapdel(&m1);
	return (result);
}
