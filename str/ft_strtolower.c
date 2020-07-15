/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:51:55 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:06:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strtolower: string to lowercase
**		Duplicates and translates a const char* of all its major letters
**			to their equivalent in lowercase
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strtolower(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	if (!(dup = ft_strdup(s)))
		return (NULL);
	while (dup[i])
	{
		if (dup[i] >= 'A' && dup[i] <= 'Z')
			dup[i] += 32;
		++i;
	}
	return (dup);
}
