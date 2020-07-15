/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:20:34 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:04:57 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strmap: string map
**		Executes a function on every char of a char const*
**		The pointed function should take a char parameter and returns a char
**		All the successive calls are stored in a char* newly allocated
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*result;

	i = 0;
	if (!f || !s || !(result = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		result[i] = f(s[i]);
		++i;
	}
	return (result);
}
