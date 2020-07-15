/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:10:27 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:04:29 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
**	ft_striter: string iteration
**		Executes a function on every character of a char*
**		The pointed function should take a char* parameter
**		NULL behaviors are handled
**		Both this and the pointed function returns nothing
*/

void	ft_striter(char *s, void (*f)(char*))
{
	size_t i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
		f(&s[i++]);
}
