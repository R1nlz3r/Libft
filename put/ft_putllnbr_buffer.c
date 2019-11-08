/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllnbr_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 09:54:54 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/05 13:04:05 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putllnbr_buffer: put long long number buffer
**		Adds the char* representation of a long long to a static char*
**		Writes on the standard output and flushes the static string
**			if a true value for an int is passed as a parameter
**		NULL behaviour is handled
**		Returns a negative value for a failed allocation
*/

int		ft_putllnbr_buffer(long long nb, int release)
{
	char	*s;
	char	*str_nb;

	if (!(str_nb = ft_lltoabase_signed(nb, 10))
		|| !(s = ft_strbuffer_leakless(str_nb)))
		return (-1);
	if (release)
	{
		ft_putstr(s);
		ft_strclr(s);
	}
	return (0);
}
