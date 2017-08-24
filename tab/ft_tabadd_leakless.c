/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:59:45 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/25 00:01:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab		*ft_tabadd_leakless(t_tab *t, int n)
{
	t_tab		*result;

	if (!t || !(result = ft_tabnew(t->size + 1)))
		return (NULL);
	result = ft_tabcpy(result, t);
	result->tab[result->len++] = n;
	ft_tabdel(&t);
	return (result);
}
