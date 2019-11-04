/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 06:25:01 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/01 17:51:45 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strdup: string duplicate
**		Duplicates a const char* into a new char*
**		The correct length is allocated then the data is then copied
**		NULL behavior is handled
**		Returns this new allocated string
*/

char	*ft_strdup(const char *s)
{
	char		*dup;
	size_t		i;

	i = 0;
	if (!s || !(dup = (char*)malloc(sizeof(char) * (ft_strlen_nullcrashless(s)
		+ 1))))
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}
