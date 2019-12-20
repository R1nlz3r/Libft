/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left_rotate_u64.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 02:55:47 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 03:58:40 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bit.h"

/*
**	ft_left_rotate_u64: left rotation unsigned 64bits
**		Rotates bitwise by the left a 64bits integer
*/

uint64_t		ft_left_rotate_u64(uint64_t val, unsigned int rot)
{
	return ((uint64_t)((val << rot) | (val >> (64 - rot))));
}
