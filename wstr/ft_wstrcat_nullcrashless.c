/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrcat_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 04:48:12 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 05:08:38 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstrcat_nullcrashless(wchar_t *dest, const wchar_t *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (dest[i])
		++i;
	while (src && src[j])
		dest[i++] = src[j++];
	dest[i] = L'\0';
	return (dest);
}
