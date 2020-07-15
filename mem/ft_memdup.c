/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 03:03:21 by mapandel          #+#    #+#             */
/*   Updated: 2020/01/14 03:16:14 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
**	ft_memdup: memory duplicate
**		Duplicates a const void* into a new void*
**		The correct length is allocated before the data is copied
**		NULL behavior is handled but the length should be correct
**		Returns this newly allocated data
*/

void	*ft_memdup(const void *s, size_t n)
{
	char		*dup;
	size_t		i;

	i = 0;
	if (!s || !(dup = ft_memalloc(n)))
		return (NULL);
	while (i < n)
	{
		dup[i] = ((char*)(unsigned long long)s)[i];
		++i;
	}
	return (dup);
}
