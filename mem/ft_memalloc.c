/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:36:48 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:49:05 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
** ft_memalloc: memory allocation
**		Alloctate memory for a size_t length
**		All the data allocated is remplaced by zeros
**		Returns a pointer on the allocated zone or NULL in case of failure
*/

void	*ft_memalloc(size_t size)
{
	void	*bus;

	if (!(bus = malloc(size)))
		return (NULL);
	ft_bzero(bus, size);
	return (bus);
}
