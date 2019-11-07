/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:18:36 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:43:20 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_wstrcat: wide string concatenation
**		Copies a const wchar_t* at the end of a wchar_t*
**		The destination should be allocated properly to receive the data
**		Returns the destination
*/

wchar_t			*ft_wstrcat(wchar_t *dest, const wchar_t *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = L'\0';
	return (dest);
}
