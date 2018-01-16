/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 07:08:11 by mapandel          #+#    #+#             */
/*   Updated: 2018/01/16 07:17:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_pow(int nb, int expo)
{
	if (!expo)
		return (1);
	if (expo > 0)
		return (nb * ft_pow(nb, expo - 1));
	return (nb * ft_pow(nb, expo + 1));
}
