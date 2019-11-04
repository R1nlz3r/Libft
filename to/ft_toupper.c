/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:23:05 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/31 18:33:07 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
