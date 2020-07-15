/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 10:02:16 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/19 18:00:09 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

/*
**	ft_lststart: list start
**		Finds the starting node of a t_list* chain and returns it
**		NULL behaviors are handled
*/

t_list		*ft_lststart(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->previous)
		lst = lst->previous;
	return (lst);
}
