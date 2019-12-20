/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 03:44:58 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/20 03:52:32 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIT_H
# define BIT_H

# include <stdint.h>

uint8_t		ft_left_rotate_u8(uint8_t val, unsigned int rot);
uint16_t	ft_left_rotate_u16(uint16_t val, unsigned int rot);
uint32_t	ft_left_rotate_u32(uint32_t val, unsigned int rot);
uint64_t	ft_left_rotate_u64(uint64_t val, unsigned int rot);
uint8_t		ft_right_rotate_u8(uint8_t val, unsigned int rot);
uint16_t	ft_right_rotate_u16(uint16_t val, unsigned int rot);
uint32_t	ft_right_rotate_u32(uint32_t val, unsigned int rot);
uint64_t	ft_right_rotate_u64(uint64_t val, unsigned int rot);

#endif
