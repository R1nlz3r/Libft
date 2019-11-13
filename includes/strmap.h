/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:51:18 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 23:48:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRMAP_H
# define STRMAP_H

# include <stdlib.h>

# include "mem.h"
# include "str.h"

char		**ft_strmapadd(char const **m, char *s);
char		**ft_strmapadd_leakless(char **m, char *s);
char		**ft_strmapcat(char **dest, const char **src);
char		**ft_strmapcat_nullcrashless(char **dest, const char **src);
char		**ft_strmapshrink(char **m, size_t size);
char		**ft_strmapshrink_leakless(char **m, size_t size);
char		**ft_strmapcpy(char **dest, const char **src);
char		**ft_strmapcpy_nullcrashless(char **dest, const char **src);
void		ft_strmapdel(char ***m);
char		**ft_strmapdup(const char **m);
char		**ft_strmapjoin(char const **m1, char const **m2);
char		**ft_strmapjoin_leakless(char **m1, char const **m2);
size_t		ft_strmaplen(const char **m);
size_t		ft_strmaplen_nullcrashless(const char **m);
char		**ft_strmapnew(size_t size);
char		**ft_strmaprev(char **m);
char		**ft_strmaprev_leakless(char **m);


#endif
