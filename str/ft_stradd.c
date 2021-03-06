/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 18:33:25 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:02:53 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_stradd: string addition
**		Adds a char at the end of a char const*
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_stradd(char const *s1, char c)
{
	size_t		len;
	char		*result;

	result = NULL;
	len = ft_strlen_nullcrashless(s1) + 1;
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result[len - 1] = c;
	return (result);
}
