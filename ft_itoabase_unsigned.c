/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 22:17:10 by mapandel          #+#    #+#             */
/*   Updated: 2017/01/23 22:32:46 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoabase_unsigned(unsigned long long int nbr, int base)
{
	char			*s;
	char			tmp;

	s = ft_strnew(0);
	if (!nbr)
		s = ft_stradd(s, '0');
	while (nbr && base > 1 && base < 37)
	{
		tmp = (char)(nbr % (unsigned)base);
		if (tmp > 9)
			tmp += 'a' - 10;
		else
			tmp += '0';
		s = ft_stradd(s, (char)tmp);
		nbr /= (unsigned)base;
	}
	return ((s = ft_strrev(s)));
}
