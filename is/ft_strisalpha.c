/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 14:56:30 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 10:54:30 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strisalpha: string is alphabetic
**		Checks all the characters in a const char*
**		Verifies if it contains only alphabetic characters
**		NULL behavior handled
*/

int		ft_strisalpha(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_isalpha(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
