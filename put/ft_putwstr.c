/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:13:49 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/31 16:41:53 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_putwstr: put wide string
**		Writes a const wchar_t* on the standard output
**		NULL behaviour is handled
**		The function do not return a value
*/

void	ft_putwstr(wchar_t const *ws)
{
	int		i;

	i = 0;
	if (!ws)
		return ;
	while (ws[i])
		ft_putwchar(ws[i++]);
}
