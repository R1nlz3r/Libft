/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmaplen_nullcrashless.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 20:05:12 by mapandel          #+#    #+#             */
/*   Updated: 2018/01/15 04:38:40 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strmaplen_nullcrashless(const char **m)
{
	size_t	i;

	i = 0;
	if (!m)
		return (0);
	while (m[i])
		++i;
	return (i);
}
