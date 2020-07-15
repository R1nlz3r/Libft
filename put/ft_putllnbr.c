/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 16:18:10 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
** ft_putnbr: put long long number
**		Writes a long long on the standard output
**		The function do not return a value
*/

void	ft_putllnbr(long long n)
{
	if (n == -9223372036854775807 - 1)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n < 10)
		ft_putchar((char)n + '0');
	else if (n > 9)
	{
		ft_putllnbr(n / 10);
		ft_putllnbr(n % 10);
	}
}
