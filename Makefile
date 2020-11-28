.PHONY: all bonus clean fclean re

NAME = libftprintf.a

HEADER = libftprintf.h

SRC = ft_printf.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c ft_putchar_fd.c\
	ft_reverse.c ft_print_hex_big.c ft_print_hex_little.c ft_print_unsigned_int.c\
	ft_print_adress.c ft_atoi.c ft_isdigit.c dec_in_bin.c\
	ft_putstr_fd_print_int_str.c ft_parser.c ft_print_line.c\
	digit_count.c
OBJ_DIR
OBJ = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

LIBFT_TARGET = libft_target
LIBFT_DIR = libft

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_TARGET)
	ar rc $(NAME) $(OBJ) $(wildcard $(LIBFT_DIR)/obj/*.o)
	ranlib $(NAME)

%.o: %.c
	gcc -c $(FLAG) $< -o $@

$(LIBFT_TARGET):
	cd $(LIBFT_DIR) && $(MAKE)

clean:
	rm -rf $(OBJ)
	cd $(LIBFT_DIR) && $(MAKE) clean

fclean: clean
	rm -rf $(NAME)
	cd $(LIBFT_DIR) && $(MAKE) fclean

re: fclean all
