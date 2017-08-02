/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 06:37:32 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/02 06:38:11 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_fd_buffer(char *s, int release, int fd)
{
	static char		*buf;

	if (!(buf = ft_strjoin_leakless(buf, s)))
		return (1);
	if (release)
	{
		ft_putstr_fd(buf, fd);
		ft_strdel(&buf);
	}
	return (0);
}
