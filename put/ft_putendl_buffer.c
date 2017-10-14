/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 03:56:55 by mapandel          #+#    #+#             */
/*   Updated: 2017/10/14 23:05:20 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl_buffer(char *s, int release)
{
	if (!(s = ft_strbuffer(s))
		|| !(s = ft_strbuffer(ft_strdup("\n"))))
		return (-1);
	if (release)
	{
		ft_putstr(s);
		ft_strclr(s);
	}
	return (0);
}
