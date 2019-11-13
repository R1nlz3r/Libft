/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 19:40:27 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:49 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

/*
** ft_puterror: put error
**		Writes a char* name followed by a char* reason on the standard error
**		Those parameters are optional (NULL behaviours are handled)
**		Strerror is called to print the system error string
**		The function do not return a value
*/

void	ft_puterror(char *name, char *reason)
{
	if (name)
	{
		ft_putstr_fd(name, 2);
		ft_putstr_fd(": ", 2);
	}
	if (reason)
	{
		ft_putstr_fd(reason, 2);
		ft_putstr_fd(": ", 2);
	}
	ft_putendl_fd(strerror(errno), 2);
}
