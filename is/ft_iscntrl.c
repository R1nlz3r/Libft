/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:56:06 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:43:18 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_iscntrl: is control
**		Checks the character code an int
**		Verifies if it is a control code (and so not printable)
*/

int		ft_iscntrl(int c)
{
	if (!ft_isprint(c))
		return (1);
	return (0);
}
