/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:00:03 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:44:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

/*
** ft_strisascii: string is ascii
**		Checks all the characters in a const char*
**		Verifies if it contains only ASCII characters
**		NULL behavior handled
*/

int		ft_strisascii(const char *s)
{
	size_t		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && ft_isascii(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
