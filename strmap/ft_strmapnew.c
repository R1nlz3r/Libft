/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 04:20:44 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/06 22:27:41 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strmapnew: string map new
**		Allocates a char** in memory for a given size_t length
**		Cleans all the data in that new string map
**		Returns it or a NULL value if the allocation failed
*/

char	**ft_strmapnew(size_t size)
{
	size_t		i;
	char		**map;

	i = 0;
	if (!(map = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (i <= size)
		map[i++] = NULL;
	return (map);
}
