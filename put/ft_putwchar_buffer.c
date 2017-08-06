/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 02:37:46 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/05 14:28:14 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwchar_buffer(wchar_t wc, int release)
{
	wchar_t		*ws;

	if (!(ws = ft_wstrnew(1)))
		return (-1);
	ws[0] = wc;
	if (!(ws = ft_wstrbuffer_leakless(ws)))
		return (-1);
	if (release)
		ft_putwstr(ws);
	return (0);
}
