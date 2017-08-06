/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:37:22 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/06 19:41:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwstr_buffer(wchar_t *ws, int release)
{
	if (!(ws = ft_wstrbuffer(ws)))
		return (-1);
	if (release)
		ft_putwstr(ws);
	ft_wstrdel(&ws);
	return (0);
}
