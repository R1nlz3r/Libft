/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:06:36 by mapandel          #+#    #+#             */
/*   Updated: 2020/01/16 21:30:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get.h"

/*
**	get_stdin: get standard input
**		Reads the entire data from the standard input
**		The system function read is called for a BUFF_SIZE number
**			of characters every time
**		The total length is stored in a ssize_t* parameter
**		Allocates the needed memory space to store the data
**		Returns it or NULL for a failed allocation or an error
*/

void	*get_stdin(ssize_t *len_read)
{
	return (get_pipe(0, len_read));
}
