/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmaplen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 20:01:48 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:50 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmap.h"

/*
**	ft_strmaplen: string map length
**		Counts the number of strings of a const char**
**		Returns a size_t length
*/

size_t		ft_strmaplen(const char **m)
{
	size_t	i;

	i = 0;
	while (m[i])
		++i;
	return (i);
}
