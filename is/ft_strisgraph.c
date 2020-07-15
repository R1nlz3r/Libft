/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisgraph.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 16:40:48 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:44:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_strisgraph: string is graphical
**		Checks all the characters in a const char*
**		Verifies if it contains only graphical characters (printable codes
**			excluding space)
**		NULL behavior handled
*/

int		ft_strisgraph(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_isgraph(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
