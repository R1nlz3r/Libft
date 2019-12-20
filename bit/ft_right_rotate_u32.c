/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right_rotate_u32.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 02:53:59 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 03:59:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bit.h"

/*
**	ft_right_rotate_u32: right rotation unsigned 32bits
**		Rotates bitwise by the right a 32bits integer
*/

uint32_t		ft_right_rotate_u32(uint32_t val, unsigned int rot)
{
	return ((uint32_t)((val >> rot) | (val << (32 - rot))));
}
