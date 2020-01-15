/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:06:36 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/23 05:02:21 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get.h"

/*
**	get_stdin: get standard input
**		Reads the standard input
**		The system function read is called for the stdin length
**			found after a call to the fstat system function
**		If the found size is bigger than the read buffer size,
**			multiple calls does happen
**		The total length read if stored in a ssize_t* parameter
**		Allocates the needed memory space to store the read data
**		Returns it or NULL for a failed allocation or an error*/

void	*get_stdin(ssize_t *len_read)
{
	return (get_file(0, len_read));
}
