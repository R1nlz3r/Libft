/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror_exit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 20:09:53 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

/*
** ft_puterror: put error exit
**		Writes a char* name followed by a char* reason on the standard error
**		Those parameters are optional (NULL behaviours are handled)
**		Calls strerror to print the system error string
**		Then exits the program with a status failure
**		The function do not return a value
*/

void	ft_puterror_exit(char *name, char *reason)
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
	exit(1);
}
