/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:10:22 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:10 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmap.h"

/*
**	ft_strmapadd: string map addition
**		Adds a char* at the end of a char const**
**		NULL behavior is handled
**		Returns this new string map or NULL an allocation failed
*/

char	**ft_strmapadd(char const **m, char *s)
{
	size_t		len;
	char		**result;

	result = NULL;
	len = ft_strmaplen_nullcrashless((const char**)(unsigned long)m) + 1;
	if (!(result = ft_strmapnew(len))
		|| !(result = ft_strmapcpy(result, (const char**)(unsigned long)m)))
		return (NULL);
	if (!(result[len - 1] = ft_strdup(s)) && s)
		return (NULL);
	return (result);
}
