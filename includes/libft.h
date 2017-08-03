/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 02:57:54 by mapandel          #+#    #+#             */
/*   Updated: 2017/08/03 06:41:19 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct		s_tab
{
	int				*tab;
	size_t			size;
	size_t			len;
}					t_tab;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *nptr);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_isinf(double f);
int					ft_islessinf(double f);
int					ft_islower(int c);
int					ft_isnan(double f);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
char				*ft_itoa(int nbr);
char				*ft_lltoabase_signed(long long nbr, int base);
char				*ft_lltoabase_signless(long long nbr, int base);
char				*ft_lltoabase_unsigned(unsigned long long nbr, int base);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				ft_putchar(char c);
int					ft_putchar_buffer(char c, int release);
void				ft_putchar_fd(char c, int fd);
int					ft_putchar_fd_buffer(char c, int release, int fd);
void				ft_putendl(char const *s);
int					ft_putendl_buffer(char *s, int release);
void				ft_putendl_fd(char const *s, int fd);
int					ft_putendl_fd_buffer(char *s, int release, int fd);
void				ft_putllnbr(long long n);
void				ft_putmap(char **m, size_t nblines);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
int					ft_putstr_buffer(char *s, int release);
void				ft_putstr_fd(char const *s, int fd);
int					ft_putstr_fd_buffer(char *s, int release, int fd);
void				ft_putwchar(wchar_t wc);
int					ft_putwchar_buffer(wchar_t wc, int release);
void				ft_putwchar_fd(wchar_t wc, int fd);
int					ft_putwchar_fd_buffer(wchar_t wc, int release, int fd);
void				ft_putwendl(wchar_t const *ws);
int					ft_putwendl_buffer(wchar_t *wc, int release);
void				ft_putwendl_fd(wchar_t const *ws, int fd);
int					ft_putwendl_fd_buffer(wchar_t *wc, int release, int fd);
void				ft_putwstr(wchar_t const *ws);
int					ft_putwstr_buffer(wchar_t *wc, int release);
void				ft_putwstr_fd(wchar_t const *ws, int fd);
int					ft_putwstr_fd_buffer(wchar_t *wc, int release, int fd);
t_tab				*ft_qsort(t_tab *t);
char				*ft_stradd(char const *s1, char c);
char				*ft_stradd_leakless(char *s1, char c);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strcat_nullcrashless(char *dest, const char *src);
char				*ft_strccat(char *dest, const char *src, char c);
char				*ft_strccat_nullcrashless(char *dest, const char *src,
	char c);
int					ft_strccmp(const char *s1, const char *s2, char c);
char				*ft_strccpy(char *dest, const char *src, char c);
char				*ft_strccpy_nullcrashless(char *dest, const char *src,
	char c);
char				*ft_strchr(const char *s, int c);
char				*ft_strcjoin(char const *s1, char const *s2, char c);
char				*ft_strcjoin_leakless(char *s1, char const *s2,
	char c);
size_t				ft_strclen(const char *s, char c);
size_t				ft_strclen_nullcrashless(const char *s, char c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strcpy_nullcrashless(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strfill(char *s, char c, size_t size);
int					ft_strisalnum(const char *s);
int					ft_strisalpha(const char *s);
int					ft_strisascii(const char *s);
int					ft_strisblank(const char *s);
int					ft_striscntrl(const char *s);
int					ft_strisdigit(const char *s);
int					ft_strisgraph(const char *s);
int					ft_strislower(const char *s);
int					ft_strisprint(const char *s);
int					ft_strispunct(const char *s);
int					ft_strisspace(const char *s);
int					ft_strisupper(const char *s);
int					ft_strisxdigit(const char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_leakless(char *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *s);
size_t				ft_strlen_nullcrashless(const char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strncat_nullcrashless(char *dest, const char *src,
	size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnjoin(char const *s1, char const *s2, size_t n);
char				*ft_strnjoin_leakless(char *s1, char const *s2, size_t n);
char				*ft_strnstr(const char *big, const char *little,
	size_t len);
char				*ft_strplugc(const char *s, char tochange, char toadd);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(const char *s);
char				*ft_strrev_leakless(char *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strsub_leakless(char *s, unsigned int start,
	size_t len);
char				*ft_strtolower(const char *s);
char				*ft_strtolower_leakless(char *s);
char				*ft_strtoupper(const char *s);
char				*ft_strtoupper_leakless(char *s);
char				*ft_strtrim(char const *s);
t_tab				*ft_tabcpy(t_tab *dest, const t_tab *src);
void				ft_tabdel(t_tab **t);
t_tab				*ft_tabdup(t_tab *t);
t_tab				*ft_tabfill(t_tab *t, int n, size_t size);
size_t				ft_tabfindpos(t_tab *t, int n);
size_t				ft_tabfindpos_over(t_tab *t, int n);
size_t				ft_tabfindpos_overeq(t_tab *t, int n);
size_t				ft_tabfindpos_under(t_tab *t, int n);
size_t				ft_tabfindpos_undereq(t_tab *t, int n);
size_t				ft_tabfindrev(t_tab *t, int n);
size_t				ft_tabfindrev_over(t_tab *t, int n);
size_t				ft_tabfindrev_overeq(t_tab *t, int n);
size_t				ft_tabfindrev_under(t_tab *t, int n);
size_t				ft_tabfindrev_undereq(t_tab *t, int n);
int					ft_tabmax(t_tab *t);
int					ft_tabmax_underone(t_tab *t);
size_t				ft_tabmaxpos(t_tab *t);
size_t				ft_tabmaxpos_underone(t_tab *t);
double				ft_tabmedian(t_tab *t);
int					ft_tabmin(t_tab *t);
int					ft_tabmin_overone(t_tab *t);
size_t				ft_tabminpos(t_tab *t);
size_t				ft_tabminpos_overone(t_tab *t);
int					ft_tabisdescending(t_tab *t);
int					ft_tabisincreasing(t_tab *t);
t_tab				*ft_tabncpy(t_tab *dest, const t_tab *src, size_t n);
t_tab				*ft_tabnew(size_t size);
void				ft_tabpush(t_tab *a, t_tab *b);
t_tab				*ft_tabrev(t_tab *t);
t_tab				*ft_tabrev_leakless(t_tab *t);
t_tab				*ft_tabrevrotate(t_tab *t);
t_tab				*ft_tabrotate(t_tab *t);
t_tab				*ft_tabswap(t_tab *t);
int					ft_tolower(int c);
int					ft_toupper(int c);
wchar_t				*ft_wstradd(wchar_t const *ws1, wchar_t wc);
wchar_t				*ft_wstradd_leakless(wchar_t *ws1, wchar_t wc);
wchar_t				*ft_wstrcat(wchar_t *dest, const wchar_t *src);
wchar_t				*ft_wstrcat_nullcrashless(wchar_t *dest,
	const wchar_t *src);
wchar_t				*ft_wstrcpy(wchar_t *dest, const wchar_t *src);
wchar_t				*ft_wstrcpy_nullcrashless(wchar_t *dest,
	const wchar_t *src);
void				ft_wstrdel(wchar_t **as);
wchar_t				*ft_wstrdup(const wchar_t *ws);
wchar_t				*ft_wstrfill(wchar_t *ws, wchar_t wc, size_t size);
wchar_t				*ft_wstrjoin(wchar_t const *s1, wchar_t const *s2);
wchar_t				*ft_wstrjoin_leakless(wchar_t *s1, wchar_t const *s2);
size_t				ft_wstrlen(const wchar_t *ws);
size_t				ft_wstrlen_nullcrashless(const wchar_t *ws);
size_t				ft_wstrlenuni(const wchar_t *ws);
wchar_t				*ft_wstrnew(size_t size);
wchar_t				*ft_wstrsub_leakless(wchar_t *ws, unsigned int start,
	size_t len);
wchar_t				*ft_wstrsub(wchar_t const *ws, unsigned int start,
	size_t len);

#endif
