/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsertaft.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 10:23:41 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/19 18:12:22 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

/*
**	ft_lstinsertaft: list insertion after
**		Inserts a t_list* chain into an other
**		This new chain is plugged right on the following node
**			of the first parameter
**		And stops at the end of the second, assuming it is the starting node
**		NULL behaviors are handled
**		The function do not return a value
*/

void	ft_lstinsertaft(t_list *lst, t_list *new)
{
	t_list		*aft;
	t_list		*new_end;

	if (!lst)
		return ;
	aft = NULL;
	new_end = ft_lstend(new);
	if (lst->next)
	{
		aft = lst->next;
		aft->previous = new_end;
	}
	lst->next = new;
	if (!new)
		return ;
	new->previous = lst;
	new_end->next = aft;
}
