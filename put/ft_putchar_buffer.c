/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 03:56:55 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 02:44:09 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putchar_buffer(char c, int release)
{
	static char		*buf;

	if (!(buf = ft_stradd_leakless(buf, c)))
		return (-1);
	if (release)
	{
		ft_putstr(buf);
		ft_strdel(&buf);
	}
	return (0);
}
