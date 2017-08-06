/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:38:13 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/06 21:06:53 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwstr_fd_buffer(wchar_t *ws, int release, int fd)
{
	if (!(ws = ft_wstrbuffer(ws)))
		return (-1);
	if (release)
		ft_putwstr_fd(ws, fd);
	ft_wstrdel(&ws);
	return (0);
}
