/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:33:53 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/13 13:56:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if ((ret = ft_strnew(i)) == NULL)
		return (NULL);
	ft_strncpy(ret, s, i);
	return (ret);
}
