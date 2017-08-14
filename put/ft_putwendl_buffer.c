/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwendl_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:20:32 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/11 05:58:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwendl_buffer(wchar_t *ws, int release)
{
	if (!(ws = ft_wstrbuffer(ws)))
		return (-1);
	if (release)
	{
		ft_putwendl(ws);
		ft_wstrclr(ws);
	}
	return (0);
}
