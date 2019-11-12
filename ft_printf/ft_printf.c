/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 10:21:36 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 00:19:23 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	ft_printf: print fromat
**		Writes a formated char* on the standard output
**		Handle most of the flags, modifiers and convertions
**			like the standard printf
**		Do not handle floating point number convertions
**		NULL behavior is handled
**		Returns the number of characters printed
*/

int		ft_printf(char *format, ...)
{
	t_printf		*p;
	int				ret;

	p = NULL;
	ret = 0;
	if (!format || !(p = init_t_printf(p)))
		return (-1);
	va_start(p->ap, format);
	ft_printf_display(p, format);
	va_end(p->ap);
	ret = p->ret;
	if (p->error == 1)
		ret = -1;
	reset_t_printf(p);
	del_t_printf(p);
	return (ret);
}
