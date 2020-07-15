/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strislower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 17:00:44 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:44:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_strislower: string is lowercase
**		Checks all the characters in a const char*
**		Verifies if it contains only letters in lowercase
**		NULL behavior handled
*/

int		ft_strislower(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_islower(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
