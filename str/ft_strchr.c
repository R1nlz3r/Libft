/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:50:01 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/01 17:36:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strchr: string search
**		Searches for an int in a const char*
**		NULL behavior is handled
**		Returns a pointer on the first occurence or NULL if none was found
*/

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != c)
		++i;
	if (s[i] == c)
		return (&((char*)(unsigned long)s)[i]);
	return (NULL);
}
