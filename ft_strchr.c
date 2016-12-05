/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:50:01 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/05 17:39:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
		return (&((char*)(unsigned long)s)[i]);
	else
		return (NULL);
}
