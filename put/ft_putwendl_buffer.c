/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwendl_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:20:32 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 06:22:07 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwendl_buffer(wchar_t *wc, int release)
{
	static wchar_t	*buf;

	if (!(buf = ft_wstrjoin_leakless(buf, wc)))
		return (-1);
	if (release)
	{
		ft_putwendl(buf);
		ft_wstrdel(&buf);
	}
	return (0);
}
