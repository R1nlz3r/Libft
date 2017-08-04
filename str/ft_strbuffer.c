/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbuffer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 06:03:38 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/04 06:10:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strbuffer(char *s)
{
	static char		*buf;

	if (!(buf = ft_strjoin_leakless(buf, s)))
		return (NULL);
	return (buf);
}
