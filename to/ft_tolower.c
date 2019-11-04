/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:26:17 by mapandel          #+#    #+#             */
/*   Updated: 2019/10/31 18:31:34 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_tolower: to lowercase
**		Translates an int with a character code of a major letter to its
**			equivalent in lowercase
*/

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
