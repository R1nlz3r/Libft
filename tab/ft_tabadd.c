/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:44:38 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:12:06 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

/*
**	ft_tabadd: table addition
**		Adds an int to the end of an int* table
**		All under t_tab* stucture, length value is updated too in consequence
**		NULL behaviors are handled but the length and size should be correct
**		Returns this new t_tab* or a NULL value if an allocation failed
*/

t_tab		*ft_tabadd(t_tab *t, int n)
{
	t_tab		*result;

	if (!t || !t->tab || t->size < t->len || !(result = ft_tabnew(t->size + 1)))
		return (NULL);
	result = ft_tabcpy(result, t);
	result->tab[result->len++] = n;
	return (result);
}
