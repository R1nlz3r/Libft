/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 06:16:37 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:49:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
** ft_memcmp: memory comparison
**		Compares two const void* for a size_t length
**		Returns an difference between them
**		NULL parameters are compared
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n || (!s1 && !s2))
		return (0);
	else if (!s1)
		return (-1);
	else if (!s2)
		return (1);
	while (--n && *(char*)(unsigned long)s1 == *(char*)(unsigned long)s2)
	{
		s1 = (char*)(unsigned long)s1 + 1;
		s2 = (char*)(unsigned long)s2 + 1;
	}
	return (*(unsigned char*)(unsigned long)s1 -
			*(unsigned char*)(unsigned long)s2);
}
