/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 05:40:58 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:49:26 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
** ft_memmove: memory move
**		Moves a const void* into a void* for a size_t length
**		The two memory zones can overlap
**		NULL behaviors are handled but the length should be correct
**		The destination should be allocated properly to receive the data
**		Returns the destination
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*result;

	result = dest;
	if (src && dest && ((((char*)dest >= (char*)(unsigned long)src + n)) ||
		(char*)dest <= (char*)(unsigned long)src))
	{
		while (n--)
		{
			*(char*)dest = *(char*)(unsigned long)src;
			dest = (char*)dest + 1;
			src = (char*)(unsigned long)src + 1;
		}
	}
	else if (src && dest)
	{
		dest = (char*)dest + n - 1;
		src = (char*)(unsigned long)src + n - 1;
		while (n--)
		{
			*(char*)dest = *(char*)(unsigned long)src;
			dest = (char*)dest - 1;
			src = (char*)(unsigned long)src - 1;
		}
	}
	return (result);
}
