/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:47:30 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:05:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strnequ: strings number equal
**		Compares two char const* for a size_t length
**		NULL behaviors are handled
**		Returns true if they contain the same data or are NULL
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2 && !ft_strncmp(s1, s2, n))
		return (1);
	return (0);
}
