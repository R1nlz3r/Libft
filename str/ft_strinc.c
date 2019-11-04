/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 20:29:47 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/02 12:31:13 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strinc: string includes
**		Compares two const char*
**		Returns true if the second parameter is contained in the first one
**		NULL behaviors are handled
*/

int		ft_strinc(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	if (s1[i])
		return (0);
	return (1);
}
