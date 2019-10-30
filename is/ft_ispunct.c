/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:05:23 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 11:07:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
