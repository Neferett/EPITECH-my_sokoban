##
## Makefile for Makefile in /home/Neferett/Makefile
## 
## Made by Bonaldi Jordan
## Login   <Neferett@epitech.net>
## 
## Started on  Fri Oct 14 12:57:09 2016 Bonaldi Jordan
## Last update Thu Dec 15 22:01:22 2016 Bonaldi Jordan
##

SRC	=	main.c				\
		handler/adress_handler.c	\
		handler/file_handler.c		\
		handler/socket_handler.c	\
		handler/message_handler.c	\
		methods/initialiser.c		\
		methods/server.c		\
		utils/utils.c

OBJ	=	$(SRC:.c=.o)

NAME	=	server

CC	=	gcc

LIB	=	lib/get_color.c			\
		lib/nb_of.c			\
		lib/my_getnbr.c			\
		lib/my_getnbr_base.c		\
		lib/specific_print.c		\
		lib/mil_convert.c		\
		lib/mil_convertu.c		\
		lib/msl.c			\
		lib/match.c			\
		lib/my_reset.c			\
		lib/my_itoa.c			\
		lib/my_advanced_sort_wordtab.c	\
		lib/my_capitalize.c		\
		lib/my_fact_rec.c		\
		lib/my_find_prime_sup.c		\
		lib/my_isneg.c			\
		lib/my_is_prime.c		\
		lib/my_power_rec.c		\
		lib/my_putnbr_base.c		\
		lib/my_put_nbr.c		\
		lib/my_putstr.c			\
		lib/my_revstr.c			\
		lib/my_showstr.c		\
		lib/my_show_wordtab.c		\
		lib/my_sort_int_tab.c		\
		lib/my_sort_wordtab.c		\
		lib/my_square_root.c		\
		lib/my_strcat.c			\
		lib/my_strcmp.c			\
		lib/my_strcpy.c			\
		lib/my_strdup.c			\
		lib/my_str_isalpha.c		\
		lib/my_str_islower.c		\
		lib/my_str_isnum.c		\
		lib/my_str_isprintable.c	\
		lib/my_str_isupper.c		\
		lib/my_strlen.c			\
		lib/my_strlowcase.c		\
		lib/my_strncat.c		\
		lib/my_strncmp.c		\
		lib/my_strncpy.c		\
		lib/my_strstr.c			\
		lib/my_strupcase.c		\
		lib/my_swap.c			\
		lib/nmatch.c			\
		lib/my_putnbru_base.c		\
		lib/my_putnbruh_base.c		\
		lib/my_putnbrul_base.c		\
		lib/my_putu_nbr.c		\
		lib/my_putul_nbr.c		\
		lib/my_putuh_nbr.c		\
		lib/my_putl_nbr.c		\
		lib/my_puth_nbr.c		\
		lib/my_str_to_wordtab.c		\
		lib/printf/my_printf.c		\
		lib/printf/methods/chars_methods.c\
		lib/printf/methods/int_methods.c\
		lib/printf/methods/methods.c	\
		lib/printf/methods/others.c	\
		lib/printf/utils/utils.c	\
		lib/printf/utils/utils_checker.c\
		lib/printf/utils/utils_methods.c\
		lib/printf/utils/params.c	\
		lib/printf/utils/init.c		\
		lib/printf/utils/utils_setter.c

OBJSLIB =       $(LIB:.c=.o)

CFLAGS  += -Wextra -Wall -Werror

CFLAGS  += -ansi -pedantic

CFLAGS  += -g3 -Iinclude/lib/ -Iinclude/

RM	=	rm -f

all:	$(NAME)

$(NAME):	$(OBJSLIB) $(OBJ)
	ar rc lib/libmy.a $(OBJSLIB)
	$(CC) $(OBJ) -o $(NAME) -Llib/ -lmy

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJSLIB)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur

.PHONY: all clean fclean re
