/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 03:56:55 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:27 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
**	ft_putendl_buffer: put end line buffer
**		Adds a char* and a newline to a static char*
**		Writes on the standard output and flushes the static string
**			if a true value for an int is passed as a parameter
**		NULL behaviour is handled
**		Returns a negative value for a failed allocation
*/

int		ft_putendl_buffer(char *s, int release)
{
	if (!(s = ft_strbuffer(s))
		|| !(s = ft_strbuffer("\n")))
		return (-1);
	if (release)
	{
		ft_putstr(s);
		ft_strclr(s);
	}
	return (0);
}
