/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:18:06 by mapandel          #+#    #+#             */
/*   Updated: 2020/07/15 15:03:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H

# include <errno.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# include "ft_conv.h"
# include "ft_str.h"
# include "ft_wstr.h"

void	ft_putchar(char c);
int		ft_putchar_buffer(char c, int release);
void	ft_putchar_fd(char c, int fd);
int		ft_putchar_fd_buffer(char c, int release, int fd);
void	ft_putendl(char const *s);
int		ft_putendl_buffer(char *s, int release);
void	ft_putendl_fd(char const *s, int fd);
int		ft_putendl_fd_buffer(char *s, int release, int fd);
void	ft_puterror(char *name, char *reason);
void	ft_puterror_exit(char *name, char *reason) __attribute__((noreturn));
void	ft_putllnbr(long long n);
int		ft_putllnbr_buffer(long long nb, int release);
void	ft_putmap(char **m, size_t nblines);
void	ft_putmem(void const *s, size_t n);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
int		ft_putstr_buffer(char *s, int release);
void	ft_putstr_fd(char const *s, int fd);
int		ft_putstr_fd_buffer(char *s, int release, int fd);
void	ft_putwchar(wchar_t wc);
int		ft_putwchar_buffer(wchar_t wc, int release);
void	ft_putwchar_fd(wchar_t wc, int fd);
int		ft_putwchar_fd_buffer(wchar_t wc, int release, int fd);
void	ft_putwendl(wchar_t const *ws);
int		ft_putwendl_buffer(wchar_t *wc, int release);
void	ft_putwendl_fd(wchar_t const *ws, int fd);
int		ft_putwendl_fd_buffer(wchar_t *ws, int release, int fd);
void	ft_putwstr(wchar_t const *ws);
int		ft_putwstr_buffer(wchar_t *ws, int release);
void	ft_putwstr_fd(wchar_t const *ws, int fd);
int		ft_putwstr_fd_buffer(wchar_t *ws, int release, int fd);

#endif
