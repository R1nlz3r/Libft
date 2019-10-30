/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:38:10 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/29 20:29:25 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isblank: is blank
**		Checks the character code an int
**		Verifies if it is a tabulation or a space
*/

int		ft_isblank(int c)
{
	if (c == ' ' || c == 9)
		return (1);
	return (0);
}
