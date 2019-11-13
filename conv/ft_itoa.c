/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 04:55:11 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:36:55 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	ft_itoa: int to array
**		Converts an int to a new char*
**		Returns this new string or NULL if the allocation failed
*/

char			*ft_itoa(int nbr)
{
	return (ft_lltoabase_signed((long long)nbr, 10));
}
