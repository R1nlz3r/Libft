/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:02:00 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:13:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_wstrlen_nullcrashless: wide string length null crashless
**		Counts the number of wide characters of a const wchar_t*
**		NULL behavior is handled
**		Returns a size_t length
*/

size_t		ft_wstrlen_nullcrashless(const wchar_t *ws)
{
	size_t	i;

	i = 0;
	if (!ws)
		return (0);
	while (ws[i])
		++i;
	return (i);
}
