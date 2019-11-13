/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 01:07:14 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:46:53 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

/*
**	ft_lstdel: list delection
**		Applies a delection function on all nodes of a chained list
**			starting from a t_list* pointer
**		This delection function takes a void* content parameter
**			and its size_t length
**		NULL behaviors are handled
**		The function do not return a value
*/

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *lst;
	t_list *nextlst;

	if  (alst)
		return ;
	lst = *alst;
	while (lst)
	{
		nextlst = lst->next;
		ft_lstdelone(&lst, del);
		lst = nextlst;
	}
	*alst = NULL;
}
