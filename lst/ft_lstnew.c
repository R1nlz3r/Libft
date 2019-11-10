/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:38:12 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/10 01:20:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_lstnew: list new
**		Allocates a t_list* in memory and a void* for a given size_t length
**		Initializes its content_size value
**			and copies the void const* parameter content,
**		The link pointer next is set to NULL
**		NULL behavior is handled but the length should be correct
**		Returns this t_list* node or a NULL value if an allocation failed
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	new = NULL;
	if (!(new = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = ft_memalloc(content_size)))
			return (NULL);
		new->content = ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
