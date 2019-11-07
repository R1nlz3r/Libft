/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 04:55:51 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:10:59 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_wstrdup: wide string duplicate
**		Duplicates a const wchar_t* into a new wchar_t*
**		The correct length is allocated then the data is copied
**		NULL behavior is handled
**		Returns this new allocated wide string
*/

wchar_t			*ft_wstrdup(const wchar_t *ws)
{
	wchar_t		*dup;
	size_t		i;

	i = 0;
	if (!ws || !(dup = ft_wstrnew(ft_wstrlen(ws))))
		return (NULL);
	while (ws[i])
	{
		dup[i] = ws[i];
		++i;
	}
	dup[i] = L'\0';
	return (dup);
}
