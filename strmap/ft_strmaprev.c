/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmaprev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 11:14:23 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:09:11 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strmap.h"

/*
**	ft_strmaprev: string map reversion
**		Duplicates and reverses a char** of its data
**		NULL behavior is handled
**		Returns this new string map or NULL if an allocation failed
*/

char	**ft_strmaprev(char **m)
{
	char		**dup;
	char		*tmp;
	size_t		start;
	size_t		end;

	if (!(dup = ft_strmapdup((const char**)(unsigned long)m)))
		return (NULL);
	start = 0;
	end = ft_strmaplen((const char**)(unsigned long)dup) - 1;
	while (dup[start] && start < end)
	{
		tmp = dup[start];
		dup[start++] = dup[end];
		dup[end--] = tmp;
	}
	return (dup);
}
