/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 17:01:21 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 11:09:45 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strisprint: string is printable
**		Checks all the characters in a const char*
**		Verifies if it contains only printable characters
**		NULL behavior handled
*/

int		ft_strisprint(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_isprint(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
