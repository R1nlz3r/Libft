/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right_rotate_u64.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 02:56:25 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 03:59:41 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bit.h"

/*
**	ft_right_rotate_u64: right rotation unsigned 64bits
**		Rotates bitwise by the right a 64bits integer
*/

uint64_t		ft_right_rotate_u64(uint64_t val, unsigned int rot)
{
	return ((uint64_t)((val >> rot) | (val << (64 - rot))));
}
