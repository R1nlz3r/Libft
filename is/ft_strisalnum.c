/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 14:36:23 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 10:53:24 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strisalnum: string is alphanumeric
**		Checks all the characters in a const char*
**		Verifies if it contains only alphanumeric characters
**		NULL behavior handled
*/

int		ft_strisalnum(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_isalnum(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
