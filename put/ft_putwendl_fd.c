/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwendl_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:08:07 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:52:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
** ft_putwendl_fd: put wide end line file descriptor
**		Writes a const wchar_t* on a file descriptor int followed by a newline
**		NULL behaviour is handled
**		The function do not return a value
*/

void	ft_putwendl_fd(wchar_t const *ws, int fd)
{
	ft_putwstr_fd(ws, fd);
	write(fd, "\n", 1);
}
