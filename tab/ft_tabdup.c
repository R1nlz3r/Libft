/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 18:14:35 by mapandel          #+#    #+#             */
/*   Updated: 2017/06/02 18:22:34 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabdup(t_tab *t)
{
	t_tab		*dup;

	if (!(dup = ft_tabnew(t->size)))
		return (NULL);
	dup = ft_tabcpy(dup, t);
	return (dup);
}
