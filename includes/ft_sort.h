/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:20:26 by mapandel          #+#    #+#             */
/*   Updated: 2020/07/15 15:03:31 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SORT_H
# define FT_SORT_H

# include <stdlib.h>

# include "ft_str.h"
# include "ft_tab.h"

# ifndef T_TAB
#  define T_TAB

/*
**	t_tab: Table structure
**		Stores data along with an integer array
**		Its memory allocated size
**		And its effective size_t length
**		Various functions associated with this type ease access
**			to complicated manipulations
*/

typedef struct		s_tab
{
	int			*tab;
	size_t		size;
	size_t		len;
}					t_tab;

# endif

t_tab				*ft_qsort(t_tab *t);
char				**ft_strmapsort(char **m);

#endif
