/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrclr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 05:45:12 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:42:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_wstrclr: wide string clear
**		Clears a wchar_t* from all its data
**		NULL behavior is handled
**		The function do not return a value
*/

void	ft_wstrclr(wchar_t *ws)
{
	size_t i;

	i = 0;
	if (!ws)
		return ;
	while (ws[i])
		ws[i++] = L'\0';
}
