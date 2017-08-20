/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmaplen_nullcrashless.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 20:05:12 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/20 20:05:56 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strmaplen_nullcrashless(char **m)
{
	size_t	i;

	i = 0;
	if (!m)
		return (0);
	while (m[i])
		++i;
	return (i);
}
