/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:05:24 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:03:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strclr: string clear
**		Clears a char* from all its data
**		NULL behavior is handled
**		The function do not return a value
*/

void	ft_strclr(char *s)
{
	size_t i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		s[i++] = '\0';
}
