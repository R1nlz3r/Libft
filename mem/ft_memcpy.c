/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:44:51 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:49:18 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
** ft_memcpy: memory copy
**		Copies a const void* into a void* for a size_t length
**		NULL behaviors are handled but the length should be correct
**		The destination should be allocated properly to receive the data
**		Returns the destination
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (dest);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)(unsigned long)src)[i];
		++i;
	}
	return (dest);
}
