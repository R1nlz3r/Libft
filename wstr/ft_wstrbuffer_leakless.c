/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrbuffer_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 08:43:39 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/08 00:29:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_wstrbuffer: wide string buffer leakless
**		Joins up a wchar_t* to a static wchar_t* buffer
**		Frees up the wchar_t* parameter addition
**		NULL behavior is handled
**		Returns this new string or NULL if the allocation failed
*/

wchar_t		*ft_wstrbuffer_leakless(wchar_t *ws)
{
	wchar_t		*tmp;

	tmp = ft_wstrbuffer(ws);
	ft_wstrdel(&ws);
	return (tmp);
}
