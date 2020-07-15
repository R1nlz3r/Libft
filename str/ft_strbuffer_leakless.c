/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuffer_leakless.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 06:17:37 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:02:56 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_strbuffer: string buffer
**		Joins up a char* to a static char* buffer
**		Frees up the char* parameter addition
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_strbuffer_leakless(char *s)
{
	char	*tmp;

	tmp = ft_strbuffer(s);
	ft_strdel(&s);
	return (tmp);
}
