/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:03:10 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:46:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

/*
**	ft_lstadd: list addition
**		Adds a t_list* node to the start of a chained t_list*
**			pointed by its address
**		The starting pointer this chained list is replaced by
**			the address of the added node
**		The function do not return a value
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
		new->next = *alst;
		*alst = new;
}
