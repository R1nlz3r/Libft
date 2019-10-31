/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 06:16:37 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 19:09:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_memcmp: memory compare
**		Searches for a an int in a const void* for a size_t length
**		Returns a pointer on the first occurence or NULL if none was found
**		NULL parameters are compared
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n || (!s1 && !s2))
		return (0);
	if (!s1 || !s2)
		return (1);
	while (--n && *(char*)(unsigned long)s1 == *(char*)(unsigned long)s2)
	{
		s1 = (char*)(unsigned long)s1 + 1;
		s2 = (char*)(unsigned long)s2 + 1;
	}
	return (*(unsigned char*)(unsigned long)s1 -
			*(unsigned char*)(unsigned long)s2);
}
