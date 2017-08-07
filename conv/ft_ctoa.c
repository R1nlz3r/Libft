/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 06:38:10 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/07 06:44:31 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
