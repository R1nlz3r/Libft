/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrjoin_leakless.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:09:11 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 06:33:11 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t			*ft_wstrjoin_leakless(wchar_t *s1, wchar_t const *s2)
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
	if (!s1)
		ft_wstrdel(&s1);
	return (result);
}
