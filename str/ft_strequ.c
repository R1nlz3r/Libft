/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:35:34 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:04:14 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strequ: strings equal
**		Compares two char const*
**		NULL behaviors are handled
**		Returns true if they contain the same data or are NULL
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2 && !ft_strcmp(s1, s2))
		return (1);
	return (0);
}
