/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:39:43 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/01 15:48:58 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get.h"

/*
**	get_file: get file
**		Reads the entire file from a file descriptor int
**		The system function read is called for a BUFF_SIZE number
**			of characters every time
**		Allocates the needed memory space to store the read string
**		Returns it or NULL for a failed allocation or an error
*/

char	*get_file(int fd)
{
	int		ret_val;
	char	*str;
	char	*str_tmp;

	str = NULL;
	str_tmp = NULL;
	while ((ret_val = get_next_char(fd, &str_tmp, EOF)) > 0)
	{
		if (!(str = ft_strjoin_leakless(str, str_tmp)))
			return (NULL);
		ft_strdel(&str_tmp);
	}
	if (ret_val == -1 || !(str = ft_strjoin_leakless(str, str_tmp)))
		return (NULL);
	ft_strdel(&str_tmp);

	return (str);
}
