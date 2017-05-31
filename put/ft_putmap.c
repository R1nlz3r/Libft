/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 11:36:32 by mapandel          #+#    #+#             */
/*   Updated: 2017/01/30 11:55:02 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmap(char **m, size_t nblines)
{
	size_t		i;

	i = 0;
	while (m && i < nblines)
		ft_putendl(m[i++]);
}