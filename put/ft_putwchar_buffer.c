/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 02:37:46 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 02:50:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwchar_buffer(wchar_t wc, int release)
{
	static wchar_t	*buf;

	if (!(buf = ft_wstradd_leakless(buf, wc)))
		return (-1);
	if (release)
	{
		ft_putwstr(buf);
		ft_wstrdel(&buf);
	}
	return (0);
}
