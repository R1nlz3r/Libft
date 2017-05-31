/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 12:09:11 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/01 01:44:48 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(t_tab **t)
{
	if (t && (*t)->tab)
	{
		free((*t)->tab);
		(*t)->tab = NULL;
	}
	if (t)
		free(*t);
	*t = NULL;
}
