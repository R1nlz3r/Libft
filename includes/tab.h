/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:53:05 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 23:48:48 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAB_H
# define TAB_H

# include <stdlib.h>

typedef struct		s_tab
{
	int				*tab;
	size_t			size;
	size_t			len;
}					t_tab;

# include "mem.h"
# include "sort.h"

t_tab				*ft_tabadd(t_tab *t, int n);
t_tab				*ft_tabadd_leakless(t_tab *t, int n);
t_tab				*ft_tabcpy(t_tab *dest, const t_tab *src);
void				ft_tabdel(t_tab **t);
t_tab				*ft_tabdup(t_tab *t);
t_tab				*ft_tabfill(t_tab *t, int n, size_t size);
size_t				ft_tabfindpos(t_tab *t, int n);
size_t				ft_tabfindpos_over(t_tab *t, int n);
size_t				ft_tabfindpos_overeq(t_tab *t, int n);
size_t				ft_tabfindpos_under(t_tab *t, int n);
size_t				ft_tabfindpos_undereq(t_tab *t, int n);
size_t				ft_tabfindrev(t_tab *t, int n);
size_t				ft_tabfindrev_over(t_tab *t, int n);
size_t				ft_tabfindrev_overeq(t_tab *t, int n);
size_t				ft_tabfindrev_under(t_tab *t, int n);
size_t				ft_tabfindrev_undereq(t_tab *t, int n);
int					ft_tabmax(t_tab *t);
int					ft_tabmax_underone(t_tab *t);
size_t				ft_tabmaxpos(t_tab *t);
size_t				ft_tabmaxpos_underone(t_tab *t);
double				ft_tabmedian(t_tab *t);
int					ft_tabmin(t_tab *t);
int					ft_tabmin_overone(t_tab *t);
size_t				ft_tabminpos(t_tab *t);
size_t				ft_tabminpos_overone(t_tab *t);
t_tab				*ft_tabncpy(t_tab *dest, const t_tab *src, size_t n);
t_tab				*ft_tabnew(size_t size);
double				ft_tabpercentile(t_tab *t, int percentile);
void				ft_tabpush(t_tab *a, t_tab *b);
t_tab				*ft_tabrev(t_tab *t);
t_tab				*ft_tabrev_leakless(t_tab *t);
t_tab				*ft_tabrevrotate(t_tab *t);
t_tab				*ft_tabrotate(t_tab *t);
t_tab				*ft_tabswap(t_tab *t);


#endif
