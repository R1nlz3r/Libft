/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 16:25:13 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 11:04:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strisdigit: string is digit
**		Checks all the characters in a const char*
**		Verifies if it contains only digit characters
**		NULL behavior handled
*/

int		ft_strisdigit(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_isdigit(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
