/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:06:36 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/08 04:08:44 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get.h"

/*
**	get_stdin: get standard input
**		Reads the standard input until an EOF character
**		The system function read is called for a BUFF_SIZE number
**			of characters every time
**		The total length if stored in a ssize_t* parameter
**		Allocates the needed memory space to store the read string
**		Returns it or NULL for a failed allocation or an error
*/

void	*get_stdin(ssize_t *len_read)
{
	return (get_file(0, len_read));
}
