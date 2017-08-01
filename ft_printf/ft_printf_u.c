/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 21:18:39 by mapandel          #+#    #+#             */
/*   Updated: 2017/07/18 22:38:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	ft_printf_u_get_arg(t_printf *p)
{
	unsigned long long		ret;

	ret = 0;
	if (p->modifier == FT_PRINTF_NO_MODIFIERS)
		ret = va_arg(p->ap, unsigned int);
	else if (p->modifier == FT_PRINTF_HH)
		ret = (unsigned long long)(unsigned short)va_arg(p->ap, unsigned int);
	else if (p->modifier == FT_PRINTF_HHH)
		ret = (unsigned long long)(unsigned char)va_arg(p->ap, unsigned int);
	else if (p->modifier == FT_PRINTF_J)
		ret = va_arg(p->ap, uintmax_t);
	else if (p->modifier == FT_PRINTF_L)
		ret = va_arg(p->ap, unsigned long);
	else if (p->modifier == FT_PRINTF_LL)
		ret = va_arg(p->ap, unsigned long long);
	else if (p->modifier == FT_PRINTF_Z)
		ret = (unsigned long long)va_arg(p->ap, size_t);
	return (ret);
}

static t_printf				*ft_printf_u_precision(t_printf *p,
	unsigned long long tmp)
{
	size_t		tmp2;
	char		*str;
	char		*buf;

	if (p->precision == 0 && !tmp)
	{
		str = ft_strnew(0);
		ft_strdel(&p->conv_ret);
		p->conv_ret = str;
	}
	else if (p->precision != -1 && (size_t)p->precision > ft_strlen(p->conv_ret)
		&& (tmp2 = (size_t)p->precision - ft_strlen(p->conv_ret)))
	{
		if (!(str = ft_strnew(tmp2))
			&& (p->error = -1))
			return (p);
		str = ft_strfill(str, '0', tmp2);
		buf = ft_strjoin(str, p->conv_ret);
		if (!buf && (p->error = -1))
			return (p);
		ft_strdel(&p->conv_ret);
		ft_strdel(&str);
		p->conv_ret = buf;
	}
	return (p);
}

static t_printf				*ft_printf_u_width(t_printf *p)
{
	size_t		tmp;
	char		*str;
	char		*buf;

	if (p->width != -1 && (size_t)p->width > ft_strlen(p->conv_ret)
		&& (tmp = (size_t)p->width - ft_strlen(p->conv_ret)))
	{
		if (!(str = ft_strnew(tmp))
			&& (p->error = -1))
			return (p);
		if (p->flags->zero && p->precision == -1 && !p->flags->less)
			str = ft_strfill(str, '0', tmp);
		else
			str = ft_strfill(str, ' ', tmp);
		if (p->flags->less)
			buf = ft_strjoin(p->conv_ret, str);
		else
			buf = ft_strjoin(str, p->conv_ret);
		ft_strdel(&p->conv_ret);
		ft_strdel(&str);
		p->conv_ret = buf;
	}
	return (p);
}

t_printf					*ft_printf_u(t_printf *p)
{
	unsigned long long		tmp;

	if (!(p->conv == FT_PRINTF_U))
		return (p);
	if (!(p->conv_ret = ft_lltoabase_unsigned(
		(tmp = ft_printf_u_get_arg(p)), 10))
		&& (p->error = -1))
		return (p);
	p = ft_printf_u_precision(p, tmp);
	if (p->error)
		return (p);
	p = ft_printf_u_width(p);
	if (p->error)
		return (p);
	ft_putstr(p->conv_ret);
	p->ret += ft_strlen(p->conv_ret);
	return (p);
}
