/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrclr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 05:45:12 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/11 05:55:25 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_wstrclr(wchar_t *ws)
{
	size_t i;

	i = 0;
	while (ws && ws[i])
		ws[i++] = L'\0';
}
