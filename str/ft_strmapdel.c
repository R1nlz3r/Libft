/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:46:45 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/19 19:03:59 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strmapdel(char ***m)
{
	size_t	i;

	i = 0;
	if (!m)
		return ;
	while (*m[i])
		ft_strdel(&(*m[i++]));
	ft_memdel((void**)*m);
}
