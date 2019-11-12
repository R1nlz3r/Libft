/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 12:09:11 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 00:23:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabdel: table delection
**		Deletes a t_tab* pointed by its address and its int* table
**		NULL behaviors are handled
**		The function do not return a value
*/

void	ft_tabdel(t_tab **t)
{
	if (t && *t)
	{
		free((*t)->tab);
		(*t)->tab = NULL;
	}
	if (t)
	{
		free(*t);
		*t = NULL;
	}
}
