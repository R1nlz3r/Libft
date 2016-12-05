/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:17:29 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/27 03:37:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*result;

	len = 0;
	result = NULL;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	if ((result = ft_strnew(len)) == NULL)
		return (NULL);
	result = ft_strcpy(result, s1);
	result = ft_strcat(result, s2);
	return (result);
}
