/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:53:11 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 23:48:19 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_H
# define IS_H

# include <unistd.h>

# include "tab.h"

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_isinf(double f);
int		ft_islessinf(double f);
int		ft_islower(int c);
int		ft_isnan(double f);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_strisalnum(const char *s);
int		ft_strisalpha(const char *s);
int		ft_strisascii(const char *s);
int		ft_strisblank(const char *s);
int		ft_striscntrl(const char *s);
int		ft_strisdigit(const char *s);
int		ft_strisgraph(const char *s);
int		ft_strislower(const char *s);
int		ft_strisprint(const char *s);
int		ft_strispunct(const char *s);
int		ft_strisspace(const char *s);
int		ft_strisupper(const char *s);
int		ft_strisxdigit(const char *s);
int		ft_tabisdescending(t_tab *t);
int		ft_tabisincreasing(t_tab *t);

#endif