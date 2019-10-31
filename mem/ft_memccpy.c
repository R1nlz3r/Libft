/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 05:00:09 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/31 11:45:06 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_memccpy: memory character copy
**		Copies a const void* into a void*
**		The copy runs for a size_t length but stops after the first encounter
**			of a int
**		NULL behaviors are handled but the length should be correct
**		The destination should be allocated properly to receive the data
**		Returns the destination or NULL if no encounter of that int was found
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n && ((char*)(unsigned long)src)[i] != (char)c)
	{
		((char*)dest)[i] = ((char*)(unsigned long)src)[i];
		i++;
	}
	if (i < n && ((char*)(unsigned long)src)[i] == (char)c)
	{
		((char*)dest)[i] = ((char*)(unsigned long)src)[i];
		return (&((char*)dest)[i + 1]);
	}
	return (NULL);
}
