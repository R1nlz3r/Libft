/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwendl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:10:04 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/31 16:38:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_putwendl: put wide end line
**		Writes a const wchar_t* on the standard output followed by a newline
**		NULL behaviour is handled
**		The function do not return a value
*/

void	ft_putwendl(wchar_t const *ws)
{
	if (ws)
		ft_putwstr(ws);
	write(1, "\n", 1);
}
