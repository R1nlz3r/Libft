/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin_leakless.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 14:34:17 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 01:45:42 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcjoin_leakless(char *s1, char const *s2, char c)
{
	size_t		len;
	char		*result;

	result = NULL;
	len = ft_strlen_nullcrashless(s1);
	len += ft_strclen_nullcrashless(s2, c);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strccat_nullcrashless(result, s2, c);
	ft_strdel(&s1);
	return (result);
}
