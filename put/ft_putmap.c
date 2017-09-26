/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 11:36:32 by mapandel          #+#    #+#             */
/*   Updated: 2017/09/26 09:34:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmap(char **m, size_t nblines)
{
	size_t		i;

	i = 0;
	while (m && i < nblines)
	{
		if (m[i])
			ft_putendl(m[i]);
		++i;
	}
}
