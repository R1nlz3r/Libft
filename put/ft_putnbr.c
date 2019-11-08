/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:18:46 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/31 15:33:55 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_putnbr: put number
**		Writes an int on the standard output
**		Those parameters are optional (NULL behaviours are handled)
**		Strerror is called to print the system error string
**		The function do not return a value
*/

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
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
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
