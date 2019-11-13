/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:05:23 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:43:55 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

/*
** ft_ispunct: is punctuation
**		Checks the character code an int
**		Verifies if it is a punctuation (graphical but not alphanumeric and
**			excluding space)
*/

int		ft_ispunct(int c)
{
	if (!ft_isalnum(c) && ft_isgraph(c))
		return (1);
	return (0);
}
