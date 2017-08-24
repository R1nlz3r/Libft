/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:44:38 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/24 23:58:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabadd(t_tab *t, int n)
{
	t_tab		*result;

	if (!t || !(result = ft_tabnew(t->size + 1)))
		return (NULL);
	result = ft_tabcpy(result, t);
	result->tab[result->len++] = n;
	return (result);
}
