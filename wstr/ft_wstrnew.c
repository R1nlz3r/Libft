/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:11:56 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:02:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_wstrnew: wide string new
**		Allocates a wchar_t* in memory for a given size_t length
**		Cleans all the data in that new wide string
**		Returns it or a NULL value if the allocation failed
*/

wchar_t			*ft_wstrnew(size_t size)
{
	size_t		i;
	wchar_t		*ws;

	i = 0;
	if (!(ws = (wchar_t*)malloc(sizeof(wchar_t) * (size + 1))))
		return (NULL);
	while (i <= size)
		ws[i++] = L'\0';
	return (ws);
}
