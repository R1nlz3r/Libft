/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striscntrl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 16:23:54 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 10:57:34 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_striscntrl: string is control
**		Checks all the characters in a const char*
**		Verifies if it contains only control code characters
**		NULL behavior handled
*/

int		ft_striscntrl(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_iscntrl(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
