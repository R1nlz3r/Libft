/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:47:25 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
** ft_putendl_fd: put end line file descriptor
**		Writes a const char* on a file descriptor int followed by a newline
**		NULL behaviour is handled
**		The function do not return a value
*/

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
