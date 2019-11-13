/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:40:02 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:47:01 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

/*
**	ft_lstiter: list iteration
**		Executes a function on every node of a chained t_list*
**		The pointed function should take a t_list* parameter
**		NULL behaviors are handled
**		Both this and the pointed function returns nothing
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*next;

	if (!f)
		return ;
	while (lst)
	{
		next = lst->next;
		f(lst);
		lst = next;
	}
}
