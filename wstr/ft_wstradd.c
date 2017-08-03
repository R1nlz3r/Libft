/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstradd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 02:49:40 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 04:09:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstradd(wchar_t const *ws1, wchar_t wc)
{
	size_t		len;
	wchar_t		*result;

	result = NULL;
	len = ft_wstrlen_nullcrashless(ws1) + 1;
	if (!(result = ft_wstrnew(len)))
		return (NULL);
	result = ft_wstrcpy_nullcrashless(result, ws1);
	result[len - 1] = wc;
	return (result);
}
