/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:53:00 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:43:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

/*
** ft_islower: is lowercase
**		Checks the character code an int
**		Verifies if it is a letter in lowercase
*/

int		ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
