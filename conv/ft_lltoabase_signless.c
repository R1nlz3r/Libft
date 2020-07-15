/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoabase_signless.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 01:58:53 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:37:04 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
**	ft_lltoabase_signless: long long to array base signless
**		Converts a long long to a new char*
**		The int base parameter allows convertion from binary to base 36
**		The negative sign is not included and should be handled
**			outside the function if nessesary
**		Returns this new string or NULL if the allocation failed
*/

char	*ft_lltoabase_signless(long long nbr, int base)
{
	unsigned long long		nb;
	char					*s;
	char					tmp;

	if (!(s = ft_strnew(0)))
		return (NULL);
	nb = (unsigned long long)nbr;
	if (nbr < 0)
		nb = (unsigned long long)-nbr;
	if (!nb)
		return ((s = ft_stradd_leakless(s, '0')));
	while (nb && base > 1 && base < 37)
	{
		tmp = (char)(nb % (unsigned long long)base);
		if (tmp > 9)
			tmp += 'a' - 10;
		else
			tmp += '0';
		s = ft_stradd_leakless(s, tmp);
		nb /= (unsigned long long)base;
	}
	return ((s = ft_strrev_leakless(s)));
}
