/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:11:38 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:52:16 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
** ft_putwstr_fd: put wide string file descriptor
**		Writes a const wchar_t* on a file descriptor int
**		NULL behaviour is handled
**		The function do not return a value
*/

void	ft_putwstr_fd(wchar_t const *ws, int fd)
{
	int		i;

	i = 0;
	if (!ws)
		return ;
	while (ws[i])
		ft_putwchar_fd(ws[i++], fd);
}
