/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:46:45 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:08:31 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strmap.h"

/*
**	ft_strmapdel: string map delection
**		Deletes a char** pointed by its address
**			and all the substrings contained inside
**		NULL behavior is handled
**		The function do not return a value
*/

void	ft_strmapdel(char ***m)
{
	size_t	i;

	i = 0;
	if (!m || !*m)
		return ;
	while ((*m)[i])
		ft_strdel(&((*m)[i++]));
	ft_memdel((void**)m);
}
