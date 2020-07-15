/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:45:39 by mapandel          #+#    #+#             */
/*   Updated: 2020/07/15 15:01:03 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONV_H
# define FT_CONV_H

# include <wchar.h>

# include "ft_is.h"
# include "ft_math.h"
# include "ft_str.h"
# include "ft_wstr.h"

double			ft_atod(const char *nptr);
int				ft_atoi(const char *nptr);
int				ft_atoi_iter(const char *nptr, size_t *iter);
int				ft_atoi_spacesless(const char *nptr);
int				ft_atoi_spacesless_iter(const char *nptr, size_t *iter);
int				ft_atoi_strict(const char *nptr, int *result);
long long		ft_atoll(const char *nptr);
char			*ft_ctoa(const char c);
char			*ft_itoa(int nbr);
char			*ft_lltoabase_signed(long long nbr, int base);
char			*ft_lltoabase_signless(long long nbr, int base);
char			*ft_lltoabase_unsigned(unsigned long long nbr, int base);
wchar_t			*ft_wctowa(const wchar_t wc);

#endif
