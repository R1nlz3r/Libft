/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:50:36 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/10 03:01:19 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_lstmap: list map
**		Executes a function on every node of a chained t_list*
**		The pointed function should take a t_list* parameter
**			and returns another
**		All the successive calls are stored in a chained t_list* newly allocated
**		NULL behaviors are handled
**		Returns the starting node this new list or NULL if an allocation failed
*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmpfirst;
	t_list *first;
	t_list *next;
	t_list *result;

	if (!lst || !f)
		return (NULL);
	result = f(lst);
	if (!(first = ft_lstnew(result->content, result->content_size)))
		return (NULL);
	tmpfirst = first;
	lst = lst->next;
	while (lst)
	{
		next = lst->next;
		result = f(lst);
		if (!(first->next = ft_lstnew(result->content, result->content_size)))
			return (NULL);
		first = first->next;
		lst = next;
	}
	return (tmpfirst);
}
