/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 00:39:56 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/21 00:38:04 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

/*
**	ft_lstdelone: list delection one
**		Applies a delection function on a t_list* node pointed by its address
**		This delection function takes a void* content parameter
**			and its size_t length
**		Links the previous and next nodes on the chain
**		NULL behaviors are handled
**		The function do not return a value
*/

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list		*previous;
	t_list		*next;

	if (!alst || !(*alst))
		return ;
	del((*alst)->content, (*alst)->content_size);
	previous = (*alst)->previous;
	next = (*alst)->next;
	if (previous)
		previous->next = next;
	if (next)
		next->previous = previous;
	(*alst)->next = NULL;
	(*alst)->previous = NULL;
	free(*alst);
	*alst = NULL;
}
