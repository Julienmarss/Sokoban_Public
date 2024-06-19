##
## EPITECH PROJECT, 2023
## my_sokoban
## File description:
## makefile
##

SRC	=	my_sokoban.c\
		src/file_info.c\
		src/init.c\
		src/movements/manage_mouvements.c\
		lib/my_str_to_word_array.c\
		src/display_map.c\
		src/checker_map.c\
		lib/my_putchar.c\
		lib/my_putstr.c\
		src/movements/find_player.c\
		src/movements/move_down.c\
		src/movements/move_up.c\
		src/movements/move_left.c\
		src/movements/move_right.c

OBJ    =    $(SRC:.c=.o)

NAME	= 	my_sokoban

CFLAGS	+= -Wall -Wextra -Werror

OUT = my_sokoban

FLAG	= -lncurses

GREEN = $(shell tput -Txterm setaf 2)

RESET = $(shell tput -Txterm sgr0)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) $(CFLAGS) $(FLAG) -o $(OUT) -g3
	@echo "$(GREEN)Compilation successful !$(RESET)"

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)
	rm -f vgcore.*

re:	fclean all
