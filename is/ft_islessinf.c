/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islessinf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 17:23:52 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:43:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"

/*
** ft_islessinf: is less infinite
**		Checks the value of a double
**		Verifies if it is a negative infinite
*/

int		ft_islessinf(double f)
{
	if (f >= -1 / 0.0 && f <= -1 / 0.0)
		return (1);
	return (0);
}
