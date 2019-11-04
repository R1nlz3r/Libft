/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 05:22:53 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/01 17:32:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strclen_nullcrashless: string character length null crashless
**		Counts the number of characters of a const char* until a char is found
**		NULL behavior is handled
**		Returns a size_t length
*/

size_t		ft_strclen_nullcrashless(const char *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != c)
		++i;
	return (i);
}
