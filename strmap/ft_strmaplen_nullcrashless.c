/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmaplen_nullcrashless.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 20:05:12 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:46 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strmap.h"

/*
**	ft_strmaplen_nullcrashless: string map length null crashless
**		Counts the number of strings of a const char**
**		NULL behavior is handled
**		Returns a size_t length
*/

size_t		ft_strmaplen_nullcrashless(const char **m)
{
	size_t	i;

	i = 0;
	if (!m)
		return (0);
	while (m[i])
		++i;
	return (i);
}
