/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:37:22 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 08:32:06 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwstr_buffer(wchar_t *wc, int release)
{
	static wchar_t	*buf;

	if (!(buf = ft_wstrjoin_leakless(buf, wc)))
		return (-1);
	if (release)
	{
		ft_putwstr(buf);
		ft_wstrdel(&buf);
	}
	return (0);
}
