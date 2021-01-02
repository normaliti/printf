.PHONY: all clean fclean re

NAME = libftprintf.a

HEADER = libftprintf.h

SRC = $(wildcard ft_*.c) digit_count.c digit_count_u.c
OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

LIBFT_TARGET = libft_target
LIBFT_DIR = libft
FLAG = -Wall -Werror -Wextra -I$(LIBFT_DIR)
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_TARGET)
	ar rc $(NAME) $(OBJ) $(wildcard $(LIBFT_DIR)/obj/*.o)
	ranlib $(NAME)

$(addprefix $(OBJ_DIR), %.o): %.c
	@mkdir -p $(OBJ_DIR)
	gcc -c $(FLAG) $< -o $@

$(LIBFT_TARGET):
	cd $(LIBFT_DIR) && $(MAKE) all

clean:
	rm -rf $(OBJ_DIR)
	cd $(LIBFT_DIR) && $(MAKE) clean

fclean: clean
	rm -rf $(NAME)
	cd $(LIBFT_DIR) && $(MAKE) fclean

noformat: FLAG += -Wno-error=format
noformat: main

main: main.c $(NAME)
	gcc $(FLAG) $^

re: fclean all

debug: FLAG += -g -O0
debug: noformat
