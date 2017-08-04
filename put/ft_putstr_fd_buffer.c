/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 06:37:32 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/04 07:39:18 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_fd_buffer(char *s, int release, int fd)
{
	if (!(s = ft_strbuffer_leakless(s)))
		return (-1);
	if (release)
	{
		ft_putstr_fd(s, fd);
		ft_strdel(&s);
	}
	return (0);
}
