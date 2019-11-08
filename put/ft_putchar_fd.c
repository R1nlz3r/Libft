/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:42:15 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/31 12:56:59 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_putchar_fd: put character file descriptor
**		Writes one char on a file descriptor int
**		The function do not return a value
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
