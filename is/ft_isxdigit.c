/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:16:59 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:44:09 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_isxdigit: is hexadecimal digit
**		Checks the character code an int
**		Verifies if it is a digit on the hexadecimal base
*/

int		ft_isxdigit(int c)
{
	if (ft_isdigit(c) || (c >= 97 && c <= 102) || (c >= 65 && c <= 70))
		return (1);
	return (0);
}
