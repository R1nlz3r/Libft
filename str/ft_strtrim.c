/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:33:53 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/04 16:50:19 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strtrim: string trim
**		Duplicates and suppresses a const char*
**			from its leading and trailing spaces, tabs and newlines
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strtrim(const char *s)
{
	size_t		i;
	char		*ret;

	if (!s)
		return (NULL);
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		++s;
	if (!(*s))
		return (ft_strnew(0));
	i = ft_strlen(s) - 1;
	while (i && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		--i;
	if (i == 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		return (NULL);
	++i;
	if (!(ret = ft_strnew(i)))
		return (NULL);
	ft_strncpy(ret, s, i);
	return (ret);
}
