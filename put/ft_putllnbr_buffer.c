/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllnbr_buffer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 09:54:54 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/04 10:40:46 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putllnbr_buffer(long long nb, int release)
{
	char	*s;

	if (!(s = ft_strbuffer_leakless(ft_lltoabase_signed(nb))))
		return (-1);
	if (release)
		ft_putstr(s);
	ft_strdel(&s);
	return (0);
}
