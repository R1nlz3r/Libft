/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:20:34 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/07 08:31:36 by mapandel         ###   ########.fr       */
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
	if (s != NULL && f != NULL)
	{
		if ((scpy = ft_strdup(s)) == NULL)
			return (NULL);
		if ((result = ft_strnew(ft_strlen(scpy))) == NULL)
			return (NULL);
		while (i < ft_strlen(scpy))
		{
			result[i] = f(scpy[i]);
			i++;
		}
	}
	return (result);
}
