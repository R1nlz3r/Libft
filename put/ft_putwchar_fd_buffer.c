/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd_buffer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:16:51 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 06:17:34 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwchar_fd_buffer(wchar_t wc, int release, int fd)
{
	static wchar_t	*buf;

	if (!(buf = ft_wstradd_leakless(buf, wc)))
		return (-1);
	if (release)
	{
		ft_putwstr_fd(buf, fd);
		ft_wstrdel(&buf);
	}
	return (0);
}
