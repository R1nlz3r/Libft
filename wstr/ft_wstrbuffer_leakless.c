/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrbuffer_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 08:43:39 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/06 07:54:16 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstrbuffer_leakless(wchar_t *ws)
{
	wchar_t		*tmp;

	tmp = ft_wstrbuffer(ws);
	if (ws)
		ft_wstrdel(&ws);
	return (tmp);
}
