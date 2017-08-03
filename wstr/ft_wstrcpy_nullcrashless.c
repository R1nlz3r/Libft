/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrcpy_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 05:11:18 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 06:07:48 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstrcpy_nullcrashless(wchar_t *dest, const wchar_t *src)
{
	size_t i;

	i = 0;
	if (!src)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = L'\0';
	return (dest);
}
