/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left_rotate_u8.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 23:55:01 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 03:52:11 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bit.h"

/*
**	ft_left_rotate_u8: left rotation unsigned 8bits
**		Rotates bitwise by the left a 8bits integer
*/

uint8_t		ft_left_rotate_u8(uint8_t val, unsigned int rot)
{
	return ((uint8_t)((val << rot) | (val >> (8 - rot))));
}
