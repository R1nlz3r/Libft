/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 17:04:55 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:44:59 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_strisupper: string is uppercase
**		Checks all the characters in a const char*
**		Verifies if it contains only uppercase characters
**		NULL behavior handled
*/

int		ft_strisupper(const char *s)
{
	size_t		i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i] && ft_isupper(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
