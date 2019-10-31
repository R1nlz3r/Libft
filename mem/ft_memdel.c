/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:43:43 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/30 19:56:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_memdel: memory delection
**		Frees the pointer pointed by a void**
**		NULL behaviors are handled
*/

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
