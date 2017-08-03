/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:05:41 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 06:32:26 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t			*ft_wstrjoin(wchar_t const *s1, wchar_t const *s2)
{
	size_t		len;
	wchar_t		*result;

	result = NULL;
	len = ft_wstrlen_nullcrashless(s1);
	len += ft_wstrlen_nullcrashless(s2);
	if (!(result = ft_wstrnew(len)))
		return (NULL);
	result = ft_wstrcpy_nullcrashless(result, s1);
	result = ft_wstrcat_nullcrashless(result, s2);
	return (result);
}
