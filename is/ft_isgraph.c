/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:58:52 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:43:26 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_isgraph: is graphical
**		Checks the character code an int
**		Verifies if it is a printable code excluding space
*/

int		ft_isgraph(int c)
{
	if (ft_isprint(c) && c != ' ')
		return (1);
	return (0);
}
