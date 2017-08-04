/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 06:35:53 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/04 07:02:22 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_buffer(char *s, int release)
{
	if (!(s = ft_strbuffer_leakless(s)))
		return (-1);
	if (release)
	{
		ft_putstr(s);
		ft_strdel(&s);
	}
	return (0);
}
