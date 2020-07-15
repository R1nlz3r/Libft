/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 02:59:53 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
** ft_putchar: put character
**		Writes one char on the standard output
**		The function do not return a value
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
