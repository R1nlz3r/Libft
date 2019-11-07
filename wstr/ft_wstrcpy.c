/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:20:17 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:53:05 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_wstrcpy: wide string copy
**		Copies a const wchar_t* into a wchar_t*
**		The destination should be allocated properly to receive the data
**		Returns the destination
*/

wchar_t			*ft_wstrcpy(wchar_t *dest, const wchar_t *src)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = L'\0';
	return (dest);
}
