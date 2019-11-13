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

t_tab		*ft_qsort(t_tab *t);
char		**ft_strmapsort(char **m);

#endif
