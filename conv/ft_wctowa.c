/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wctowa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 06:45:18 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:37:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
**	ft_wctowa: wide char to wide array
**		Converts a wchar to a new wchar*
**		Returns this new string or NULL if the allocation failed
*/

wchar_t		*ft_wctowa(const wchar_t wc)
{
	wchar_t		*result;

	if (!wc && !(result = ft_wstrnew(0)))
		return (NULL);
	else if (!(result = ft_wstrnew(1)))
		return (NULL);
	result[0] = wc;
	return (result);
}
