/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:13:37 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
** ft_putendl: put end line
**		Writes a const char* on the standard output followed by a newline
**		NULL behaviour is handled
**		The function do not return a value
*/

void	ft_putendl(char const *s)
{
	if (s)
		ft_putstr(s);
	write(1, "\n", 1);
}
