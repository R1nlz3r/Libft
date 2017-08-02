/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 12:25:29 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/02 06:26:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcjoin(char const *s1, char const *s2, char c)
{
	size_t		len;
	char		*result;

	len = 0;
	result = NULL;
	len = ft_strlen_nullcrashless(s1);
	len += ft_strclen_nullcrashless(s2, c);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strccat_nullcrashless(result, s2, c);
	return (result);
}
