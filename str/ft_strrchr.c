/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:05:39 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:05:59 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
** ft_strrchr: string reverse search
**		Searches for an int in a const char* from the end to start
**		NULL behavior is handled
**		Returns a pointer on the first occurence or NULL if none was found
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*scpy;

	if (!(scpy = (char*)(unsigned long)s))
		return (NULL);
	while (*scpy)
		++scpy;
	while (scpy != s && *scpy != c)
		--scpy;
	if (*scpy == c)
		return (scpy);
	return (NULL);
}
