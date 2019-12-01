/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 03:17:20 by mapandel          #+#    #+#             */
/*   Updated: 2019/12/01 16:09:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_H
# define GET_H

# define BUFF_SIZE 4096

# include <unistd.h>

# include "mem.h"
# include "str.h"


/*
**	t_line: Used as a chain list
**		Stores the last buffer string
**		For the given int file descriptor
*/

typedef struct		s_line
{
	struct s_line	*next;
	int				fd;
	char			pad_0[4];
	char			*save;
}					t_line;

char				*get_file(int fd);
int					get_next_char(const int fd, char **line, char c);
int					get_next_line(const int fd, char **line);
char				*get_stdin(void);

#endif
