/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapjoin_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 02:26:09 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/18 03:30:37 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapjoin_leakless(char **m1, char const **m2)
{
	size_t		len;
	char		**result;

	result = NULL;
	len = ft_strmaplen_nullcrashless((const char**)(unsigned long)m1);
	len += ft_strmaplen_nullcrashless((const char**)(unsigned long)m2);
	if (!(result = ft_strmapnew(len)))
		return (NULL);
	if (!(result = ft_strmapcpy_nullcrashless(result, (const char**)
		(unsigned long)m1)))
		return (NULL);
	result = ft_strmapcat_nullcrashless(result, m2);
	if (m1)
		ft_strmapdel(&m1);
	return (result);
}
