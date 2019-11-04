/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 23:28:15 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/04 22:34:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strsub_leakless: string substitution leakless
**		Duplicates and extracts the data of a char*
**			starting at an unsigned int index for a size_t length
**		Frees up the char* source
**		NULL behavior is handled but the length should be correct
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strsub_leakless(char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*cpy;

	i = 0;
	if (!s || start > ft_strlen(s) || !(cpy = ft_strnew(len)))
		return (NULL);
	while (i < len)
		cpy[i++] = s[start++];
	ft_strdel(&s);
	return (cpy);
}
