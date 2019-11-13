/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuffer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 06:03:38 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:02:59 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strbuffer: string buffer
**		Joins up a char* to a static char* buffer
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strbuffer(char *s)
{
	static char		*buf;

	return (buf = ft_strjoin_leakless(buf, s));
}
