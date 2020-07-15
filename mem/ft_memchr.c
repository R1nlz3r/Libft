/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 05:54:16 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:49:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
** ft_memchr: memory search
**		Searches for an int in a const void* for a size_t length
**		Returns a pointer on the first occurence or NULL if none was found
**		NULL behavior is handled but the length should be correct
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*bus;

	i = 0;
	bus = NULL;
	if (!s)
		return (NULL);
	while (i < n && ((unsigned char*)(unsigned long)s)[i] != (unsigned char)c)
		i++;
	if (i >= n)
		return (NULL);
	bus = &((char*)(unsigned long)s)[i];
	return ((void*)bus);
}
