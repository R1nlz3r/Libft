/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 02:16:27 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:42 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmap.h"

/*
**	ft_strjoin: string join
**		Creates a char** from the concatenation of two char const**
**		NULL behaviors are handled
**		Returns this new string map or NULL if the allocation failed
*/

char	**ft_strmapjoin(char const **m1, char const **m2)
{
	size_t		len;
	char		**result;

	len = ft_strmaplen_nullcrashless((const char**)(unsigned long)m1);
	len += ft_strmaplen_nullcrashless((const char**)(unsigned long)m2);
	if (!(result = ft_strmapnew(len)))
		return (NULL);
	if (!(result = ft_strmapcpy_nullcrashless(result, m1)))
		return (NULL);
	result = ft_strmapcat_nullcrashless(result, m2);
	return (result);
}
