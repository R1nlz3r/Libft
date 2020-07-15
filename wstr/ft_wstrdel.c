/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 04:54:13 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/07 19:54:38 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wstr.h"

/*
**	ft_wstrdel: wide string delection
**		Deletes a wchar_t* pointed by its address
**		NULL behavior is handled
**		The function do not return a value
*/

void	ft_wstrdel(wchar_t **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
