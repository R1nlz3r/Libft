/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:59:45 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:12:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tab.h"

/*
**	ft_tabadd_leakless: table addition leakless
**		Adds an int to the end of an int* table
**		All under t_tab* stucture, length value is updated too in consequence
**		Frees up the t_tab* source
**		NULL behaviors are handled but the length and sizes should be correct
**		Returns it or a NULL value if an allocation failed
*/

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
