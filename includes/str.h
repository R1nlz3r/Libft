/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:49:53 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 23:48:39 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <stdlib.h>

# include "mem.h"

char		*ft_stradd(char const *s1, char c);
char		*ft_stradd_leakless(char *s1, char c);
char		*ft_strbuffer(char *s);
char		*ft_strbuffer_leakless(char *s);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strcat_nullcrashless(char *dest, const char *src);
char		*ft_strccat(char *dest, const char *src, char c);
char		*ft_strccat_nullcrashless(char *dest, const char *src, char c);
int			ft_strccmp(const char *s1, const char *s2, char c);
char		*ft_strccpy(char *dest, const char *src, char c);
char		*ft_strccpy_nullcrashless(char *dest, const char *src, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strcjoin(char const *s1, char const *s2, char c);
char		*ft_strcjoin_leakless(char *s1, char const *s2, char c);
size_t		ft_strclen(const char *s, char c);
size_t		ft_strclen_nullcrashless(const char *s, char c);
void		ft_strclr(char *s);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strcpy_nullcrashless(char *dest, const char *src);
void		ft_strdel(char **as);
char		*ft_strdup(const char *s);
int			ft_strequ(char const *s1, char const *s2);
char		*ft_strfill(char *s, char c, size_t size);
int			ft_strinc(const char *s1, const char *s2);
void		ft_striter(char *s, void (*f)(char*));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_leakless(char *s1, char const *s2);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *s);
size_t		ft_strlen_nullcrashless(const char *s);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strncat(char *dest, const char *src, size_t n);
char		*ft_strncat_nullcrashless(char *dest, const char *src, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strnjoin(char const *s1, char const *s2, size_t n);
char		*ft_strnjoin_leakless(char *s1, char const *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strplugc(const char *s, char tochange, char toadd);
char		*ft_strrchr(const char *s, int c);
char		*ft_strrev(const char *s);
char		*ft_strrev_leakless(char *s);
char		**ft_strsplit(char const *s, char c);
char		*ft_strstr(const char *big, const char *little);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strsub_leakless(char *s, unsigned int start, size_t len);
char		*ft_strtolower(const char *s);
char		*ft_strtolower_leakless(char *s);
char		*ft_strtoupper(const char *s);
char		*ft_strtoupper_leakless(char *s);
char		*ft_strtrim(char const *s);

#endif
