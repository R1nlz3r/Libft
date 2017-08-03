/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 06:02:00 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 06:04:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wstrlen_nullcrashless(const wchar_t *ws)
{
	size_t	i;

	i = 0;
	if (!ws)
		return (0);
	while (ws[i])
		++i;
	return (i);
}
