/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:51:55 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/04 22:33:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strtolower_leakless: string to lowercase leakless
**		Duplicates and translates a char* of all its major letters
**			to their equivalent in lowercase
**		Frees up the char* source
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strtolower_leakless(char *s)
{
	char	*dup;
	int		i;

	i = 0;
	if (!(dup = ft_strdup(s))
		return (NULL);
	while (dup[i])
	{
		if (dup[i] >= 'A' && dup[i] <= 'Z')
			dup[i] += 32;
		++i;
	}
	ft_strdel(&s);
	return (dup);
}
