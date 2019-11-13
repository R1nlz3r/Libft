/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoabase_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 22:17:10 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:37:08 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	ft_lltoabase_unsigned: long long to array base unsigned
**		Converts an unsigned long long to a new char*
**		The int base parameter allows convertion from binary to base 36
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_lltoabase_unsigned(unsigned long long nbr, int base)
{
	char			*s;
	char			tmp;

	s = (!nbr) ? ft_strdup("0") : NULL;
	while (nbr && base > 1 && base < 37)
	{
		tmp = (char)(nbr % (unsigned)base);
		tmp += (tmp > 9) ? 'a' - 10 : '0';
		if (!(s = ft_stradd_leakless(s, (char)tmp)))
			return (NULL);
		nbr /= (unsigned)base;
	}
	return ((s = ft_strrev_leakless(s)));
}
