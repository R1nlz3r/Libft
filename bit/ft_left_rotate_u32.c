/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left_rotate_u32.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 02:53:12 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 03:58:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bit.h"

/*
**	ft_left_rotate_u32: left rotation unsigned 32bits
**		Rotates bitwise by the left a 32bits integer
*/

uint32_t		ft_left_rotate_u32(uint32_t val, unsigned int rot)
{
	return ((uint32_t)((val << rot) | (val >> (32 - rot))));
}
