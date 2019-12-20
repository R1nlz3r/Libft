/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:20:26 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 23:48:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include <stdlib.h>

# include "str.h"
# include "tab.h"

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
