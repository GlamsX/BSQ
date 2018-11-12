##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## bsq
##

NAME	=	bsq

CFLAGS	+=	-W -Wextra -Wall -I./include

MSRC	=	src/main.c

TSRC	=	tests/test1.c	\
			tests/test2.c

SRC	=	src/init_struct.c	\
		src/algo.c	\
		src/print.c \
		src/changes_in_map.c \
		lib/get_x_y_size.c

OBJ	=	$(SRC:.c=.o) $(MSRC:.c=.o)

TOBJ	=	$(SRC:.c=.o) $(TSRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) $(CFLAGS) -o $(NAME)
	rm -f $(OBJ)

test:	$(SRC) $(TSRC)
	gcc -lcriterion --coverage $(SRC) $(TSRC) -o unit_tests
	rm -f $(TOBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests
	rm -f *.gcov
	rm -f *.gcda
	rm -f *.gcno

re:	fclean all

.PHONY : all clean fclean re
