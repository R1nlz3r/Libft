/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:13:19 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:17 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
** ft_strccmp: string character comparison
**		Compares two const char* until a char if found
**		Returns an int difference between them
**		NULL parameters are compared
*/

int		ft_strccmp(const char *s1, const char *s2, char c)
{
	size_t i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	else if (!s1)
		return (-1);
	else if (!s2)
		return (1);
	while (s1[i] && s1[i] == s2[i] && s1[i] != c)
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
