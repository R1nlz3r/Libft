/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right_rotate_u8.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 23:58:39 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 03:58:54 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bit.h"

/*
**	ft_right_rotate_u8: right rotation unsigned 8bits
**		Rotates bitwise by the right a 8bits integer
*/

uint8_t		ft_right_rotate_u8(uint8_t val, unsigned int rot)
{
	return ((uint8_t)((val >> rot) | (val << (8 - rot))));
}
