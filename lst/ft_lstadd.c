/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:03:10 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/21 02:19:42 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

/*
**	ft_lstadd: list addition
**		Adds a t_list* node to the end of a chained t_list*
**			pointed by its address
**		NULL behaviors are handled
**		The function do not return a value
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list		*end;

	if (!alst || !new)
		return ;
	end = ft_lstend(*alst);
	if (end)
	{
		end->next = new;
		new->previous = end;
	}
	else
		*alst = new;
}
