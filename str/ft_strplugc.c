/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplugc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 08:42:26 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:05:56 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strplugc: string plug character
**		Duplicates a const char* changing the first occurence of a char
**			by an other char
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strplugc(const char *s, char tochange, char toadd)
{
	char	*dup;
	int		i;

	i = 0;
	if (!(dup = ft_strdup(s)))
		return (NULL);
	while (dup[i] && dup[i] != tochange)
		++i;
	if (dup[i] == tochange)
		dup[i] = toadd;
	return (dup);
}
