/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:23:28 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:43:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

/*
** ft_isprint: is printable
**		Checks the character code an int
**		Verifies if it is a printable code (so excluding control codes)
*/

int		ft_isprint(int c)
{
	if ((!((c >= 0 && c <= 31) || c == 127)) && c >= 0 && c <= 127)
		return (1);
	return (0);
}
