/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 14:25:29 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:02:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_stradd_leakless: string addition leakless
**		Adds a char at the end of a char*
**		Frees up the char* source
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_stradd_leakless(char *s1, char c)
{
	size_t		len;
	char		*result;

	result = NULL;
	len = ft_strlen_nullcrashless(s1) + 1;
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result[len - 1] = c;
	ft_memdel((void**)&s1);
	return (result);
}
