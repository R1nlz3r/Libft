/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapadd_leakless.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:22:31 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/18 12:22:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapadd_leakless(char **m, char *s)
{
	size_t		len;
	char		**result;

	result = NULL;
	len = ft_strmaplen_nullcrashless((const char**)(unsigned long)m) + 1;
	if (!(result = ft_strmapnew(len))
		|| !(result = ft_strmapcpy_nullcrashless(result,
		(const char**)(unsigned long)m)))
		return (NULL);
	if (!(result[len - 1] = ft_strdup(s)))
		return (NULL);
	if (m)
		ft_strmapdel(&m);
	return (result);
}
