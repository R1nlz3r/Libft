/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd_buffer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:16:51 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/06 06:14:54 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwchar_fd_buffer(wchar_t wc, int release, int fd)
{
	wchar_t		*ws;

	if (!(ws = ft_wstrnew(1)))
		return (-1);
	ws[0] = wc;
	if (!(ws = ft_wstrbuffer_leakless(ws)))
		return (-1);
	if (release)
		ft_putwstr_fd(ws, fd);
	return (0);
}
