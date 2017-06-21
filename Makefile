# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 03:03:10 by mapandel          #+#    #+#              #
#    Updated: 2017/06/21 06:12:17 by mapandel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

#			Compilation

CC = 		clang
CFLAGS = 	-Wall -Wextra -Werror -Weverything

#			Sources

SRC =		conv/ft_atoi.c \
			conv/ft_itoa.c \
			conv/ft_lltoabase_signed.c \
			conv/ft_lltoabase_signless.c \
			conv/ft_lltoabase_unsigned.c \
			get_next/get_next_line.c \
			get_next/get_next_char.c \
			is/ft_isalnum.c \
			is/ft_isalpha.c \
			is/ft_isascii.c \
			is/ft_isblank.c \
			is/ft_iscntrl.c \
			is/ft_isdigit.c \
			is/ft_isgraph.c \
			is/ft_isinf.c \
			is/ft_islessinf.c \
			is/ft_islower.c \
			is/ft_isnan.c \
			is/ft_isprint.c \
			is/ft_ispunct.c \
			is/ft_isspace.c \
			is/ft_isupper.c \
			is/ft_isxdigit.c \
			is/ft_strisalnum.c \
			is/ft_strisalpha.c \
			is/ft_strisascii.c \
			is/ft_strisblank.c \
			is/ft_striscntrl.c \
			is/ft_strisdigit.c \
			is/ft_strisgraph.c \
			is/ft_strislower.c \
			is/ft_strisprint.c \
			is/ft_strispunct.c \
			is/ft_strisspace.c \
			is/ft_strisupper.c \
			is/ft_strisxdigit.c \
			is/ft_tabisdescending.c \
			is/ft_tabisincreasing.c \
			lst/ft_lstadd.c \
			lst/ft_lstdel.c \
			lst/ft_lstdelone.c \
			lst/ft_lstiter.c \
			lst/ft_lstmap.c \
			lst/ft_lstnew.c \
			mem/ft_bzero.c \
			mem/ft_memalloc.c \
			mem/ft_memccpy.c \
			mem/ft_memchr.c \
			mem/ft_memcmp.c \
			mem/ft_memcpy.c \
			mem/ft_memdel.c \
			mem/ft_memmove.c \
			mem/ft_memset.c \
			put/ft_putchar.c \
			put/ft_putchar_fd.c \
			put/ft_putendl.c \
			put/ft_putendl_fd.c \
			put/ft_putllnbr.c \
			put/ft_putmap.c \
			put/ft_putnbr.c \
			put/ft_putnbr_fd.c \
			put/ft_putstr.c \
			put/ft_putstr_fd.c \
			put/ft_putwchar.c \
			put/ft_putwchar_fd.c \
			put/ft_putwendl.c \
			put/ft_putwendl_fd.c \
			put/ft_putwstr.c \
			put/ft_putwstr_fd.c \
			sort/ft_qsort.c \
			str/ft_stradd.c \
			str/ft_stradd_leakless.c \
			str/ft_strcat.c \
			str/ft_strccat.c \
			str/ft_strccmp.c \
			str/ft_strccpy.c \
			str/ft_strchr.c \
			str/ft_strcjoin.c \
			str/ft_strcjoin_leakless.c \
			str/ft_strclen.c \
			str/ft_strclr.c \
			str/ft_strcmp.c \
			str/ft_strcpy.c \
			str/ft_strdel.c \
			str/ft_strdup.c \
			str/ft_strequ.c \
			str/ft_strfill.c \
			str/ft_striter.c \
			str/ft_striteri.c \
			str/ft_strjoin.c \
			str/ft_strjoin_leakless.c \
			str/ft_strlcat.c \
			str/ft_strlen.c \
			str/ft_strmap.c \
			str/ft_strmapi.c \
			str/ft_strncat.c \
			str/ft_strncmp.c \
			str/ft_strncpy.c \
			str/ft_strnequ.c \
			str/ft_strnew.c \
			str/ft_strnjoin.c \
			str/ft_strnjoin_leakless.c \
			str/ft_strnstr.c \
			str/ft_strplugc.c \
			str/ft_strrchr.c \
			str/ft_strrev.c \
			str/ft_strrev_leakless.c \
			str/ft_strsplit.c \
			str/ft_strstr.c \
			str/ft_strsub.c \
			str/ft_strsub_leakless.c \
			str/ft_strtolower.c \
			str/ft_strtolower_leakless.c \
			str/ft_strtoupper.c \
			str/ft_strtoupper_leakless.c \
			str/ft_strtrim.c \
			tab/ft_tabcpy.c \
			tab/ft_tabdel.c \
			tab/ft_tabdup.c \
			tab/ft_tabfill.c \
			tab/ft_tabfindpos.c \
			tab/ft_tabfindpos_over.c \
			tab/ft_tabfindpos_overeq.c \
			tab/ft_tabfindpos_under.c \
			tab/ft_tabfindpos_undereq.c \
			tab/ft_tabfindrev.c \
			tab/ft_tabfindrev_over.c \
			tab/ft_tabfindrev_overeq.c \
			tab/ft_tabfindrev_under.c \
			tab/ft_tabfindrev_undereq.c \
			tab/ft_tabmax.c \
			tab/ft_tabmax_underone.c \
			tab/ft_tabmaxpos.c \
			tab/ft_tabmaxpos_underone.c \
			tab/ft_tabmedian.c \
			tab/ft_tabmin.c \
			tab/ft_tabmin_overone.c \
			tab/ft_tabminpos_overone.c \
			tab/ft_tabminpos.c \
			tab/ft_tabncpy.c \
			tab/ft_tabnew.c \
			tab/ft_tabpush.c \
			tab/ft_tabrev.c \
			tab/ft_tabrev_leakless.c \
			tab/ft_tabrevrotate.c \
			tab/ft_tabrotate.c \
			tab/ft_tabswap.c \
			to/ft_tolower.c \
			to/ft_toupper.c \
			wstr/ft_wstrcat.c \
			wstr/ft_wstrcpy.c \
			wstr/ft_wstrdel.c \
			wstr/ft_wstrdup.c \
			wstr/ft_wstrfill.c \
			wstr/ft_wstrjoin.c \
			wstr/ft_wstrjoin_leakless.c \
			wstr/ft_wstrlen.c \
			wstr/ft_wstrlenuni.c \
			wstr/ft_wstrnew.c \
			wstr/ft_wstrsub.c \
			wstr/ft_wstrsub_leakless.c \

OBJ =		$(SRC:.c=.o)

INC =		includes

#			Colors

DEF =		\033[0m
GRA =		\033[1m
SOU =		\033[4m
BLI =		\033[5m
BLA =		\033[30m
RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
BLU =		\033[34m
PUR =		\033[35m
CYA =		\033[36m
WHI =		\033[37m

#			Main Rules

.PHONY: all re glu affcompil clean fclean

$(NAME):
	@make affcompil
	@echo "$(GRE)--::Libft Indextion::--$(DEF)"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

re: fclean all

glu: fclean all clean

#			Compilation Rules

%.o: %.c
	$(CC) $(CFLAGS) -I $(INC) -c -o $@ $^

affcompil:
	@echo "$(BLU)--::Libft Compilation::--$(DEF)"
	@make $(OBJ)

#			Clean Rules

clean:
	@echo "$(PUR)--::Libft Binary Delection::--$(DEF)"
	@rm -rf $(OBJ)

fclean: clean
	@echo "$(RED)--::Libft.a Delection::--$(DEF)"
	@rm -rf $(NAME)
