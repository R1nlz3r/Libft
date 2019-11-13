/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:09:31 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:44:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

/*
** ft_isspace: is space
**		Checks the character code an int
**		Verifies if it is an escape character (space, tabs, ect..)
*/

int		ft_isspace(int c)
{
	if (ft_isblank(c) || (c >= 10 && c <= 13))
		return (1);
	return (0);
}
