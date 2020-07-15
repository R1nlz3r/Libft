/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 21:00:49 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:36:40 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conv.h"

/*
**	ft_atoi_strict: array to integer strict
**		Extracts an int value from the data of a const char*
**		This string should contain the value of a an int and nothing else
**		The extracted value is stored in an int* parameter
**		NULL behavior is handled
**		Returns a negative status value if the parsing was not successfull
*/

static int	ft_atoi_strict2(const char *nptr, size_t zero, size_t len)
{
	if (len > 11 + zero
		|| (len == 11 + zero && ft_isdigit(nptr[0]))
		|| (len == 10 + zero && ft_strcmp(nptr, "2147483647") > 0)
		|| (len == 11 + zero && nptr[0] == '+'
		&& ft_strcmp(&nptr[1 + zero], "2147483647") > 0)
		|| (len == 11 + zero && nptr[0] == '-'
		&& ft_strcmp(&nptr[1 + zero], "2147483648") > 0))
		return (-1);
	return (0);
}

int			ft_atoi_strict(const char *nptr, int *result)
{
	size_t	zero;
	size_t	len;
	size_t	i;

	zero = 0;
	if (!result)
		return (-1);
	*result = 0;
	if (!nptr || !nptr[0] || !result
		|| !((ft_isdigit(nptr[0]) || nptr[0] == '+' || nptr[0] == '-')
		&& (ft_strisdigit(&nptr[1]) || (!nptr[1] && ft_isdigit(nptr[0])))))
		return (-1);
	len = ft_strlen(nptr);
	if ((i = 1) && nptr[0] == '0')
		++zero;
	while (i < len && nptr[i++] == '0')
		++zero;
	if (!ft_atoi_strict2(nptr, zero, len))
		return (-1);
	*result = ft_atoi(nptr);
	return (0);
}
