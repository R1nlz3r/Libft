/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 06:38:10 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:36:51 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	ft_ctoa: character to array
**		Allocates a memory zone to store a char in a first position of a char*
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_ctoa(const char c)
{
	char	*result;

	if (!c && !(result = ft_strnew(0)))
		return (NULL);
	else if (!(result = ft_strnew(1)))
		return (NULL);
	result[0] = c;
	return (result);
}
