/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:17:29 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:04:40 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strjoin: string join
**		Creates a char* from the concatenation of two char const*
**		NULL behaviors are handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*result;

	len = ft_strlen_nullcrashless(s1);
	len += ft_strlen_nullcrashless(s2);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strcat_nullcrashless(result, s2);
	return (result);
}
