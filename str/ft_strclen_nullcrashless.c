/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen_nullcrashless.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 05:22:53 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/02 06:09:18 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strclen_nullcrashless(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s && s[i] && s[i] != c)
		++i;
	return (i);
}
