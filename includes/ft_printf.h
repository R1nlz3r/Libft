/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 10:19:56 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/18 23:21:38 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <wchar.h>

# include "conv.h"
# include "is.h"
# include "mem.h"
# include "put.h"
# include "str.h"
# include "wstr.h"


// Length modifier for the next conversion
enum						e_printf_modifier
{
	FT_PRINTF_NO_MODIFIERS,
	FT_PRINTF_HH,
	FT_PRINTF_HHH,
	FT_PRINTF_J,
	FT_PRINTF_Z,
	FT_PRINTF_L,
	FT_PRINTF_LL
};


// Conversions gateway
enum						e_printf_conv
{
	FT_PRINTF_WAIT_INPUT,
	FT_PRINTF_C,
	FT_PRINTF_D,
	FT_PRINTF_O,
	FT_PRINTF_P,
	FT_PRINTF_S,
	FT_PRINTF_U,
	FT_PRINTF_X,
	FT_PRINTF_XX,
	FT_PRINTF_PERCENT
};


// Apply additional flags to the next conversion
/*
**	t_printf_flags:
**		Contains booleans for the given flags
**		Those will be applied on the next conversion
*/

typedef struct				s_printf_flags
{
	int						sharp;
	int						zero;
	int						less;
	int						space;
	int						plus;
	int						apostrophe;
}							t_printf_flags;


/*
**	t_printf: data container for this project
**		Stores the va_list to get arguments from
**		An error boolean to feedback any fail on system functions
**		The format string index that will be iterated on
**		An increasing counter of characters printed used as return value
		A tampon character variable then a padding
**		The sum of characters printed on the last conversion
**		Some flags variables used on each conversion
**		Flags / conversions / modifiers gateways
**		And an array of function pointers used to find the conversion function
**			linked to the right conversion enum
*/

typedef struct				s_printf
{
	va_list					ap;
	int						error;
	int						index;
	int						ret;
	char					tmpchar;
	char					pad_0[3];
	char					*conv_ret;
	int						width;
	int						precision;
	t_printf_flags			*flags;
	enum e_printf_modifier	modifier;
	enum e_printf_conv		conv;
	struct s_printf			*(*tab_ptr[11])(struct s_printf *p);
}							t_printf;

int							ft_printf(char *format, ...);
t_printf					*init_t_printf(t_printf *p);
void						reset_t_printf(t_printf *p);
void						del_t_printf(t_printf *p);
void						ft_printf_display(t_printf *p, const char *format);
t_printf					*ft_printf_parsing(t_printf *p, const char *format);
void						ft_printf_get_conv(t_printf *p, const char *format);
void						ft_printf_get_modifier(t_printf *p,
	const char *format);
void						ft_printf_get_flag(t_printf *p, const char *format);
void						ft_printf_get_precision(t_printf *p,
	const char *format);
void						ft_printf_get_width(t_printf *p,
	const char *format);
t_printf					*ft_printf_conv(t_printf *p);
t_printf					*ft_printf_s(t_printf *p);
t_printf					*ft_printf_ss(t_printf *p);
t_printf					*ft_printf_p(t_printf *p);
t_printf					*ft_printf_d(t_printf *p);
t_printf					*ft_printf_o(t_printf *p);
t_printf					*ft_printf_u(t_printf *p);
t_printf					*ft_printf_x(t_printf *p);
t_printf					*ft_printf_c(t_printf *p);
t_printf					*ft_printf_cc(t_printf *p);
t_printf					*ft_printf_percent(t_printf *p);
t_printf					*ft_printf_no_conv(t_printf *p);

#endif
