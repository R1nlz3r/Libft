/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 04:40:01 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/04 08:26:02 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putchar_fd_buffer(char c, int release, int fd)
{
	char	*s;

	if (!s = ft_strnew(1))
		return (-1);
	s[0] = c;
	if (!(s = ft_strbuffer_leakless(s)))
		return (-1);
	if (release)
		ft_putstr_fd(s, fd);
	ft_strdel(&s);
	return (0);
}
