/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:31:15 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:05:02 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strmapi: string map index
**		Executes a function on every char of a char const*
**		The pointed function should take an unsigned int index who will be
**			iterated and a char
**		All the successive calls are stored in a char* newly allocated
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!f || !s || !(result = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		++i;
	}
	return (result);
}
