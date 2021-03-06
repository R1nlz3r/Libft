/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_nullcrashless.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 04:39:36 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:04:50 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strlen_nullcrashless: string length null crashless
**		Counts the number of characters of a const char*
**		NULL behavior is handled
**		Returns a size_t length
*/

size_t		ft_strlen_nullcrashless(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		++i;
	return (i);
}
