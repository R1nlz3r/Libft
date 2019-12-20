/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right_rotate_u16.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 02:51:04 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 04:00:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bit.h"

/*
**	ft_right_rotate_u16: right rotation unsigned 16bits
**		Rotates bitwise by the right a 16bits integer
*/

uint16_t		ft_right_rotate_u16(uint16_t val, unsigned int rot)
{
	return ((uint16_t)((val >> rot) | (val << (16 - rot))));
}
