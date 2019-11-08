/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 13:02:22 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 23:58:57 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strcjoin: string number join
**		Creates a char* from the concatenation of two char const*
**			for a size_t length
**		NULL behaviors are handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	size_t		len;
	char		*result;

	len = ft_strlen_nullcrashless(s1);
	len += n;
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strncat_nullcrashless(result, s2, n);
	return (result);
}
