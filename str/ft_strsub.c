/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:53:42 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:06:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strsub: string substitution
**		Duplicates and extracts the data of a char const*
**			starting at an unsigned int index for a size_t length
**		NULL behavior is handled but the length should be correct
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*cpy;

	i = 0;
	if (!s || start > ft_strlen(s) || !(cpy = ft_strnew(len)))
		return (NULL);
	while (i < len)
		cpy[i++] = s[start++];
	return (cpy);
}
