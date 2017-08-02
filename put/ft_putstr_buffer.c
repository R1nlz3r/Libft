/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 06:35:53 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/02 06:36:29 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_buffer(char *s, int release)
{
	static char		*buf;

	if (!(buf = ft_strjoin_leakless(buf, s)))
		return (1);
	if (release)
	{
		ft_putstr(buf);
		ft_strdel(&buf);
	}
	return (0);
}
