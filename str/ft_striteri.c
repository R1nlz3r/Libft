/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:14:35 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:04:32 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_striteri: string iteration index
**		Executes a function on every character of a char*
**		The pointed function should take an unsigned int index who will be
**			iterated and a char*
**		NULL behaviors are handled
**		Both this and the pointed function returns nothing
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}
