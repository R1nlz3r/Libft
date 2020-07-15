/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoabase_signed.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 02:18:37 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:37:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
**	ft_lltoabase_signed: long long to array base signed
**		Converts a long long to a new char*
**		The int base parameter allows convertion from binary to base 36
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_lltoabase_signed(long long nbr, int base)
{
	unsigned long long		nb;
	char					*s;
	int						neg;
	char					tmp;

	s = NULL;
	neg = (nbr < 0) ? 1 : 0;
	nb = (nbr < 0) ? (unsigned long long)-nbr : (unsigned long long)nbr;
	if (!nb)
		return (ft_strdup("0"));
	while (nb && base > 1 && base < 37)
	{
		tmp = (char)(nb % (unsigned long long)base);
		tmp += (tmp > 9) ? 'a' - 10 : '0';
		if (!(s = ft_stradd_leakless(s, tmp)))
			return (NULL);
		nb /= (unsigned long long)base;
	}
	s = (neg && s) ? ft_stradd_leakless(s, '-') : (char*)s;
	return (ft_strrev_leakless(s));
}
