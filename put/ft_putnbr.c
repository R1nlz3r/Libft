/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:18:46 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/16 21:30:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	if (n == 2147483647)
		ft_putstr("2147483647");
	if (n < 0 && n != -2147483648)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n < 10 && n != -2147483648)
		ft_putchar((char)n + '0');
	else if (n > 9 && n != 2147483647)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
