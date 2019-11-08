/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_leakless.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 14:32:12 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 23:58:44 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strjoin_leakless: string join leaklesss
**		Creates a char* from the concatenation of a char* and a char const*
**		Frees up the first source parameter char*
**		NULL behaviors are handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strjoin_leakless(char *s1, char const *s2)
{
	size_t		len;
	char		*result;

	len = ft_strlen_nullcrashless(s1);
	len += ft_strlen_nullcrashless(s2);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strcat_nullcrashless(result, s2);
	ft_strdel(&s1);
	return (result);
}
