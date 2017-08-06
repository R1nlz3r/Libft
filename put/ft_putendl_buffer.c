/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 03:56:55 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/05 05:01:54 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl_buffer(char *s, int release)
{
	if (!(s = ft_strbuffer(s)))
		return (-1);
	if (release)
	{
		ft_putendl(s);
		ft_strdel(&s);
	}
	return (0);
}
