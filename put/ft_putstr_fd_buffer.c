/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 06:37:32 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/11 04:48:29 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_fd_buffer(char *s, int release, int fd)
{
	if (!(s = ft_strbuffer(s)))
		return (-1);
	if (release)
	{
		ft_putstr_fd(s, fd);
		ft_strclr(s);
	}
	return (0);
}
