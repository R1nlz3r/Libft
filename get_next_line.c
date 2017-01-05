#include "libft.h"

static t_line    *ft_init_list(t_line *list, const int fd)
{
  t_line    *start;
  t_line    *previous;

  start = list;
  previous = NULL;
  while (list && list->fd != fd)
  {
    previous = list;
    list = list->next;
  }
  if (!list)
  {
    if (!(list = ft_memalloc(sizeof(t_line)))
      || !(list->buf = ft_strnew(BUFF_SIZE)))
      return (NULL);
    list->fd = fd;
  }
  if (previous)
    previous->next = list->next;
  list->next = start;
  return (list);
}

static int    ft_check_buf(t_line *list, char **line)
{
  if (ft_strchr(list->buf, '\n'))
  {
    *line = ft_strcjoin(*line, list->buf, '\n');
    list->buf = ft_strsub(list->buf, (unsigned int)ft_strclen(list->buf,
      '\n') + 1, ft_strlen(list->buf) - ft_strclen(list->buf, '\n'));
    return (1);
  }
  *line = ft_strjoin(*line, list->buf);
  ft_strclr(list->buf);
  return (0);
}

int   get_next_line(const int fd, char **line)
{
  static t_line *list = NULL;
  long           i;

  i = 0;
  if (!line || BUFF_SIZE < 1 || fd < 0 || read(fd, 0, 0)
    || !(*line = ft_strnew(0)) || !(list = ft_init_list(list, fd)))
    return (-1);
  if (ft_check_buf(list, line))
    return (1);
  while ((i = read(fd, list->buf, BUFF_SIZE)))
  {
    if (ft_check_buf(list, line))
      return (1);
    if (!*line)
      return (-1);
    if (i < BUFF_SIZE)
      break ;
  }
  if (**line)
    return (1);
  ft_strdel(&list->buf);
  return(0);
}
