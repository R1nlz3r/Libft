/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 03:17:20 by mapandel          #+#    #+#             */
/*   Updated: 2020/01/16 19:36:29 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_H
# define GET_H

# include <unistd.h>
# include <stdio.h>
# include <sys/stat.h>

# include "mem.h"
# include "str.h"

# define BUFF_SIZE 65536

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

void				*get_file_segment(int fd, void *s, size_t buf_len,
	ssize_t *total_read_len, ssize_t *read_len);
void				*get_file(int fd, ssize_t *read_len);
int					get_next_char(const int fd, char **line, char c);
int					get_next_line(const int fd, char **line);
void				*get_pipe(int fd, ssize_t *read_len);
void				*get_stdin(ssize_t *read_len);

#endif
