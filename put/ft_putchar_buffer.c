/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 03:56:55 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:49:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
**	ft_putchar_buffer: put character buffer
**		Adds a char to a static char*
**		Writes on the standard output and flushes the static string
**			if a true value for an int is passed as a parameter
**		Returns a negative value for a failed allocation
*/

int		ft_putchar_buffer(char c, int release)
{
	char	*s;

	if (!(s = ft_strnew(1)))
		return (-1);
	s[0] = c;
	if (!(s = ft_strbuffer_leakless(s)))
		return (-1);
	if (release)
	{
		ft_putstr(s);
		ft_strclr(s);
	}
	return (0);
}
