/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 03:56:55 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/04 11:06:57 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putchar_buffer(char c, int release)
{
	char	*s;

	if (!(s = ft_strnew(1)))
		return (-1);
	s[0] = c;
	if (!(s = ft_strbuffer_leakless(s)))
		return (-1);
	if (release)
		ft_putstr(s);
	ft_strdel(&s);
	return (0);
}
