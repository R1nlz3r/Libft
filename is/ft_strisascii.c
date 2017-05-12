/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:00:03 by mapandel          #+#    #+#             */
/*   Updated: 2017/05/05 16:58:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisascii(const char *s)
{
	size_t		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && ft_isascii(s[i]))
		++i;
	if (!s[i])
		return (1);
	return (0);
}
