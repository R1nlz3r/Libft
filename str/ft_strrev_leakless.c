/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 13:33:38 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:06:04 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strrev_leakless: string reversion leakless
**		Duplicates and reverses a char* of its data
**		Frees up the char* source
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strrev_leakless(char *s)
{
	char		*dup;
	char		tmp;
	size_t		start;
	size_t		end;

	if (!(dup = ft_strdup(s)))
		return (dup);
	start = 0;
	end = ft_strlen(dup) - 1;
	while (dup && dup[start] && start < end)
	{
		tmp = dup[start];
		dup[start++] = dup[end];
		dup[end--] = tmp;
	}
	ft_memdel((void**)&s);
	return (dup);
}
