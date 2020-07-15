/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left_rotate_u16.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 02:46:24 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 03:58:09 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bit.h"

/*
**	ft_left_rotate_u16: left rotation unsigned 16bits
**		Rotates bitwise by the left a 16bits integer
*/

uint16_t		ft_left_rotate_u16(uint16_t val, unsigned int rot)
{
	return ((uint16_t)((val << rot) | (val >> (16 - rot))));
}
