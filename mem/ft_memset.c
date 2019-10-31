/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 03:39:09 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/31 11:48:57 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_memset: memory setting
**		Fills up a void* with an int for a size_t length
**		NULL behavior is handled but the length should be correct
**		Returns the changed source
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*bus;

	bus = s;
	while (n--)
	{
		*bus = (unsigned char)c;
		++bus;
	}
	return (s);
}
