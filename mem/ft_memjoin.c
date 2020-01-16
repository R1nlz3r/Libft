/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:20:21 by mapandel          #+#    #+#             */
/*   Updated: 2020/01/16 19:34:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
**	ft_memjoin: memory join
**		Creates a void* from the concatenation of two void const*
**		NULL behaviors are handled but the lengths should be correct
**		Returns this new data or NULL if the allocation failed
*/

void	*ft_memjoin(const void *s1, const void *s2, size_t n1, size_t n2)
{
	void	*result;

	if (!(result = ft_memalloc(n1 + n2)))
		return (NULL);
	ft_memcpy(result, s1, n1);
	ft_memcpy((char*)result + n1, s2, n2);
	return (result);
}
