/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 04:10:09 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:49:01 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
** ft_bzero: base zero
**		Clean a void* for a size_t length
**		All the data is remplaced by zeros
**		NULL behavior is handled
**		The function do not return a value
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bus;
	size_t			i;

	i = 0;
	bus = s;
	if (!bus)
		return ;
	while (i < n)
		bus[i++] = 0;
}
