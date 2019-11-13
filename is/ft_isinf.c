/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 17:21:28 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:43:29 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

/*
** ft_isinf: is infinite
**		Checks the value of a double
**		Verifies if it is a positive infinite
*/

int		ft_isinf(double f)
{
	if (f >= 1 / 0.0 && f <= 1 / 0.0)
		return (1);
	return (0);
}
