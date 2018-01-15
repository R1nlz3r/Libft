/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:20:34 by mapandel          #+#    #+#             */
/*   Updated: 2018/01/15 06:48:53 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*scpy;
	char		*result;

	i = 0;
	scpy = NULL;
	result = NULL;
	if (!s || !f || !(scpy = ft_strdup(s))
		|| !(result = ft_strnew(ft_strlen(scpy))))
		return (NULL);
	while (i < ft_strlen(scpy))
	{
		result[i] = f(scpy[i]);
		++i;
	}
	return (result);
}
