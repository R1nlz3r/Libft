/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left_rotate_u8.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 23:55:01 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/19 23:57:01 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_left_rotate_u8: left rotation unsigned 8bits
**		Rotates bitwise by the left a 8bits value
*/

unsigned char	ft_left_rotate_u8(unsigned char val, unsigned int rot)
{
	return ((val >> rot) | (val << (8 - rot)));
}
