/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 04:06:11 by mapandel          #+#    #+#             */
/*   Updated: 2017/01/29 04:08:17 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfill(char *s, char c)
{
	size_t		i;

	i = 0;
	while (s && s[i])
		s[i++] = c;
	return (s);
}
