/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 02:23:19 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/04 10:09:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strrev: string reversion
**		Duplicates and reverses a const char* of its data
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strrev(const char *s)
{
	char		*dup;
	char		tmp;
	size_t		start;
	size_t		end;

	if (!(dup = ft_strdup(s)))
		return (NULL);
	start = 0;
	end = ft_strlen(dup) - 1;
	while (dup[start] && start < end)
	{
		tmp = dup[start];
		dup[start++] = dup[end];
		dup[end--] = tmp;
	}
	return (dup);
}
