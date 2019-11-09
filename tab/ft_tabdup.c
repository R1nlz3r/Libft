/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 18:14:35 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 13:39:16 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tabdup: table duplicate
**		Duplicates a t_tab* into a new t_tab*
**		The correct length is allocated before the data is copied
**		NULL behaviors are handled
**		Returns this new allocated table
*/

t_tab		*ft_tabdup(t_tab *t)
{
	t_tab		*dup;

	if (!t || !(dup = ft_tabnew(t->size)))
		return (NULL);
	dup = ft_tabcpy(dup, t);
	return (dup);
}
