/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 02:08:23 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:06:47 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strtoupper_leakless: string to uppercase leakless
**		Duplicates and translates a char* of all its minor letters
**			to their equivalent in uppercase
**		Frees up the char* source
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strtoupper_leakless(char *s)
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
	ft_strdel(&s);
	return (dup);
}
