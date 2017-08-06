/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrbuffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 06:52:43 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/06 14:49:19 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstrbuffer(wchar_t *ws)
{
	static wchar_t		*buf;

	if (!(buf = ft_wstrjoin_leakless(buf, ws)))
		return (NULL);
	return (buf);
}
