/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuffer_leakless.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 06:17:37 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/04 06:24:46 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strbuffer_leakless(char *s)
{
	char	*tmp;

	tmp = ft_strbuffer(s);
	if (s)
		ft_strdel(&s);
	return (tmp);
}
