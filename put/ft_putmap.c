/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 11:36:32 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:51:01 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
** ft_putmap: put map
**		Writes a char** for a size_t length
**		Every char* is followed by a newline
**		NULL behaviors are handled
**		The function do not return a value
*/

void	ft_putmap(char **m, size_t nblines)
{
	size_t		i;

	i = 0;
	while (m && i < nblines)
	{
		if (m[i])
			ft_putendl(m[i]);
		++i;
	}
}
