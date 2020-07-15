/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:44:41 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:51:26 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
** ft_putstr_fd: put string file descriptor
**		Writes a const char* on a file descriptor int
**		NULL behaviour is handled
**		The function do not return a value
*/

void	ft_putstr_fd(char const *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}
