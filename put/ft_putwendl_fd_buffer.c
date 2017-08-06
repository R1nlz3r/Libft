/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwendl_fd_buffer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:33:55 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/06 20:10:50 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwendl_fd_buffer(wchar_t *ws, int release, int fd)
{
	if (!(ws = ft_wstrbuffer(ws)))
		return (-1);
	if (release)
		ft_putwendl_fd(ws, fd);
	ft_wstrdel(&ws);
	return (0);
}
