/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsertbef.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:12:41 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/19 18:19:24 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

/*
**	ft_lstinsertbef: list insertion before
**		Inserts a t_list* chain into an other
**		This new chain is plugged right on the previous node
**			of the first parameter
**		And stops at the end of the second, assuming it is the starting node
**		NULL behaviors are handled
**		The function do not return a value
*/

void	ft_lstinsertbef(t_list *lst, t_list *new)
{
	t_list		*bef;
	t_list		*new_end;

	if (!lst)
		return ;
	bef = NULL;
	new_end = ft_lstend(new);
	if (lst->previous)
	{
		bef = lst->previous;
		bef->next = new;
	}
	lst->previous = new_end;
	if (!new)
		return ;
	new->previous = bef;
	new_end->next = lst;
}
