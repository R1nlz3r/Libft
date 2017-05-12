/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 13:02:22 by mapandel          #+#    #+#             */
/*   Updated: 2017/05/01 13:05:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	size_t		len;
	char		*result;

	len = 0;
	result = NULL;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	len += n;
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy(result, s1);
	result = ft_strncat(result, s2, n);
	return (result);
}
