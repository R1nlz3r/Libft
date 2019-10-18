/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:10:22 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/18 09:39:03 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapadd(char const **m, char *s)
{
	size_t		len;
	char		**result;

	result = NULL;
	len = ft_strmaplen_nullcrashless((const char**)(unsigned long)m) + 1;
	if (!(result = ft_strmapnew(len))
		|| !(result = ft_strmapcpy(result, (const char**)(unsigned long)m)))
		return (NULL);
	if (!(result[len - 1] = ft_strdup(s)))
		return (NULL);
	return (result);
}
