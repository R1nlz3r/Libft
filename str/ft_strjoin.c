/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:17:29 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/02 05:17:46 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*result;

	len = 0;
	result = NULL;
	len = ft_strlen_nullcrashless(s1);
	len += ft_strlen_nullcrashless(s2);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy_nullcrashless(result, s1);
	result = ft_strcat_nullcrashless(result, s2);
	return (result);
}
