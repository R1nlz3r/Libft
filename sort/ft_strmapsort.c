/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:33:09 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:58:54 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

/*
**	ft_strmapsort: string map sorting
**		Sorts a char** by comparing its char*
**		NULL behaviors are handled
*/

char	**ft_strmapsort(char **m)
{
	int		tmppos;
	char	*tmpbuf;
	int		i;
	int		j;

	i = 0;
	if (!m)
		return (NULL);
	while (m[i] && m[i + 1])
	{
		tmppos = i;
		j = i + 1;
		while (m[j])
		{
			if (ft_strcmp(m[tmppos], m[j]) > 0)
				tmppos = j;
			++j;
		}
		tmpbuf = m[tmppos];
		m[tmppos] = m[i];
		m[i] = tmpbuf;
		++i;
	}
	return (m);
}
