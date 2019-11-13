/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:31:50 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:12:35 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wstr.h"

/*
**	ft_wstrlen: wide string length
**		Counts the number of wide characters of a const wchar_t*
**		Returns a size_t length
*/

size_t		ft_wstrlen(const wchar_t *ws)
{
	size_t	i;

	i = 0;
	while (ws[i])
		++i;
	return (i);
}
