/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnan.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 17:23:52 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/29 20:45:27 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isnan: is not a value
**		Checks the value of a double
**		Verifies if it is not a value
*/

int		ft_isnan(double f)
{
	if (f != f)
		return (1);
	return (0);
}
