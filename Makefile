##
## EPITECH PROJECT, 2021
## epitech
## File description:
## Makefile
##

SRC	=	lib/my/my_putchar.c \
		lib/my/my_put_nbr.c \
		lib/my/my_strlen.c \
		lib/my/my_putstr.c \
		lib/my/my_twod_size.c \
		lib/my/my_char_to_str.c \
		lib/my/my_printf.c \
		lib/my/my_intchar.c \
		lib/my/my_octal.c \
		lib/my/my_binary.c \
		lib/my/my_readfile.c \
		lib/my/my_octal_str.c \
		lib/my/my_numarg.c \
		lib/my/my_strip.c \
		lib/my/my_strchr.c \
		lib/my/my_concate.c \
		lib/my/my_modify.c \
		lib/my/my_revstr.c \
		lib/my/my_hexa_cap.c \
		lib/my/my_hexa.c \
		lib/my/my_str_comp.c \
		lib/my/my_getnbr.c \
		lib/my/my_strdup.c \
		lib/my/my_format.c \
		lib/my/my_split.c \
		lib/my/my_charint.c \
		lib/my/my_checker.c

OBJ	=	$(SRC:.c=.o)

CFLAGS =	-g3 -I./includes

NAMELIB =	libmy.a

BINNAME	=	abin_test

NAME	=	my_main.c

all: libmy.a clean
	@gcc -o $(BINNAME) $(NAME) $(CFLAGS) -L ./lib/my -lmy
	@echo "COMPILED: OK"

libmy.a:
	gcc $(CFLAGS) -c $(SRC)
	@ar rc ./lib/my/$(NAMELIB) *.o
	@rm -f lib/my/*.o
	@echo "CREATED LIB: OK"

clean:
	@rm -f *~
	@rm -f *.o
	@rm -f *.gcno
	@rm -f *.gcda
	@rm -f vgcore*
	@echo "CLEAN: OK"

fclean:	clean
	@rm -f $(BINNAME)
	@echo "FCLEAN: OK"

re:	fclean libmy.a

.PHONY: libmy.a all clean fclean re
