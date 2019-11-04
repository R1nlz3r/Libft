/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin_leakless.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 13:05:45 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/04 23:37:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strnjoin_leakless: string number join leakless
**		Creates a char* from the concatenation of a char* and a char const*
**			for a size_t length
**		Frees up the first source parameter char*
**		NULL behaviors are handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strnjoin_leakless(char *s1, char const *s2, size_t n)
{
	size_t		len;
	char		*result;

	result = NULL;
	len = ft_strlen_nullcrashless(s1);
	len += n;
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strncat_nullcrashless(result, s2, n);
	if (s1)
		ft_strdel(&s1);
	return (result);
}
