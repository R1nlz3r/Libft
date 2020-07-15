/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 18:47:33 by mapandel          #+#    #+#             */
/*   Updated: 2020/01/16 19:03:25 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
** ft_putmem: put memory
**		Writes a const void* on the standard output
**		NULL behavior is handled but the length should be correct
**		The function do not return a value
*/

void	ft_putmem(void const *s, size_t n)
{
	if (s)
		write(1, s, n);
}
