##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile of infinadd
##

NAME	=	bsq

SRC	=	src/principal_functions/main.c			\
		src/principal_functions/bsq.c 			\
		src/support_functions/read_file.c 		\
		src/support_functions/mesure_size.c 	\
		src/support_functions/get_lines.c 		\
		src/support_functions/get_columns.c 	\
		src/support_functions/clean_string.c	\
		src/support_functions/subtracted_lines.c\
		src/principal_functions/find_bsq.c 		\
		src/support_functions/error_handling.c 	\
		src/support_functions/increment_loop.c 	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/ -pedantic -g3 -Wpedantic -Wno-long-long -Werror

LDLIBS	=	-L./lib/ -lmy

all:		$(NAME)

$(NAME):	make_lib $(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LDLIBS)

make_lib:
		$(MAKE) -C lib/my

clean:
		rm -f $(OBJ)
		$(MAKE) clean -C lib/my/

fclean: 	clean
		rm -f $(NAME)
		$(MAKE) fclean -C lib/my

run_tests:

re:		fclean all
		$(MAKE) re -C lib/my
