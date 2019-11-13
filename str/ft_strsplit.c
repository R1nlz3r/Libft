/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 03:27:31 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:06:25 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strsplit: string split
**		Splits up a const char* by a char
**		All the parts are contained in a char** newly allocated
**		NULL behavior is handled
**		Returns this new map of strings or NULL if an allocation failed
*/

static int		ft_splitwords(char **result, const char *s, char c)
{
	int			i;
	size_t		len;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			++s;
		if (*s)
		{
			while (s[len] && s[len] != c)
				++len;
			if (!(result[i] = ft_strnew(len)))
				return (0);
			ft_strncpy(result[i], s, len);
			s += len;
			++i;
		}
	}
	result[i] = NULL;
	return (1);
}

static size_t	ft_countwords(const char *s, char c)
{
	size_t nbwords;
	size_t i;

	nbwords = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			++i;
		while (s[i] && s[i] != c)
			++i;
		++nbwords;
	}
	return (nbwords);
}

char			**ft_strsplit(const char *s, char c)
{
	char		**result;
	size_t		nbwords;

	if (!s || !c)
		return (NULL);
	if (!s[0])
	{
		if (!(result = ft_memalloc(sizeof(char*) * 1)))
			return (NULL);
		result[0] = NULL;
		return (result);
	}
	nbwords = ft_countwords(s, c);
	if (!(result = ft_memalloc(sizeof(char*) * (nbwords + 1))))
		return (NULL);
	if (!ft_splitwords(result, s, c))
		return (NULL);
	return (result);
}
