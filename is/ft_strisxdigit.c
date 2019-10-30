/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisxdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 17:07:27 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 11:15:17 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strisxdigit: string is hexadecimal digit
**		Checks all the characters in a const char*
**		Verifies if it contains only digit characters on the hexadecimal base
**		NULL behavior handled
*/

int		ft_strisxdigit(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_isxdigit(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
