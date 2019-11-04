/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:39:53 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/03 22:54:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strncmp: string number comparison
**		Compares two const char* for a size_t length
**		Returns an int difference between them
**		NULL parameters are compared
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n || (!s1 && !s2))
		return (0);
	else if (!s1)
		return (-1);
	else if (!s2)
		return (1);
	while (*s1 && *s2 && *s1 == *s2 && --n)
	{
		++s1;
		++s2;
	}
	return (*(unsigned char*)(unsigned long)s1 -
			*(unsigned char*)(unsigned long)s2);
}
