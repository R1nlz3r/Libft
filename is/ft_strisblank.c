/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisblank.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:02:11 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 10:56:30 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strisblank: string is blank
**		Checks all the characters in a const char*
**		Verifies if it contains only blank characters (spaces or tabs)
**		NULL behavior handled
*/

int		ft_strisblank(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_isblank(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
