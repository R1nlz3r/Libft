/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:56:39 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:06:50 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strtoupper: string to uppercase
**		Duplicates and translates a const char* of all its minor letters
**			to their equivalent in uppercase
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strtoupper(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	if (!(dup = ft_strdup(s)))
		return (NULL);
	while (dup[i])
	{
		if (dup[i] >= 'a' && dup[i] <= 'z')
			dup[i] -= 32;
		++i;
	}
	return (dup);
}
