/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 04:40:01 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/02 04:40:01 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putchar_fd_buffer(char c, int release, int fd)
{
	static char		*buf;

	if (!(buf = ft_stradd_leakless(buf, c)))
		return (1);
	if (release)
	{
		ft_putstr_fd(buf, fd);
		ft_strdel(&buf);
	}
	return (0);
}
