/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:14:08 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/18 05:31:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t			*ft_wstrsub(wchar_t const *ws, unsigned int start, size_t len)
{
	unsigned int	i;
	wchar_t			*cpy;

	i = 0;
	if (!ws || start > ft_wstrlen(ws))
		return (NULL);
	cpy = ft_wstrnew(len);
	if (!cpy)
		return (NULL);
	while (i < len)
		cpy[i++] = ws[start++];
	return (cpy);
}
