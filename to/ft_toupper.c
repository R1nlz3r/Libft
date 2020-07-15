/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:23:05 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 19:16:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_to.h"

/*
**	ft_toupper: to uppercase
**		Translates an int with a character code of a minor letter to its
**			equivalent in uppercase
*/

int		ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
