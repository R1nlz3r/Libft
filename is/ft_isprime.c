/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 05:17:25 by mapandel          #+#    #+#             */
/*   Updated: 2020/07/15 14:52:02 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_isprime: is prime
**		Checks the value of an int
**		Verifies if it is a prime number
*/

int		ft_isprime(int nb)
{
	int		i;

	i = 2;
	if (nb < 0)
		nb = -nb;
	if (nb <= 1)
		return (1);
	while (i < nb)
	{
		if (!(nb % i++))
			return (0);
	}
	return (1);
}
