/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 04:06:11 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:04:19 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strfill: string fill
**		Fills a char* with a char for a size_t length
**		NULL behavior is handled but the size should be correct
*/

char	*ft_strfill(char *s, char c, size_t size)
{
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < size)
		s[i++] = c;
	return (s);
}
