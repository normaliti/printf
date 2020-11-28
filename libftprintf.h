#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
#include "stdio.h"

typedef enum enumAligment
{
	RIGHT, //0 if we don't have a flag '-'
	LEFT //1 if we have a flag '-'	
}					Alignment;


typedef struct		s_parser
{
	Alignment		alignment;
	char 			fill_char;
	int				width;
	int				precision_flag;
	int				precision;
	char			type;
	int				count;
}					t_parser;

va_list ap;
int count;


int		ft_printf(const char *format, ...);

void	ft_putnbr_fd(long int n, int fd);

void	ft_putstr_fd(char *s, int fd);

size_t	ft_strlen(const char *s);

void	ft_putchar_fd(char c, int fd);

void	ft_reverse(char s[]);

void	ft_print_hex_big(int n);

void	ft_print_hex_little(int n);

void	ft_print_unsigned_int(int a);

void	ft_print_adress(void *a);

int		ft_atoi(const char *str);

int		ft_isdigit(int c);

int		dec_in_bin(int num);

void	ft_putstr_fd_print_int_str(char *s, int fd, int f);

t_parser	ft_parser(char **str);

void ft_print_number(t_parser *p);

int ft_print_line(t_parser *p);

int digit_count (int a);
void ft_fill_width(char c, int n);
void ft_check_star(t_parser *p);
void ft_int_post_proc(t_parser *p, int num);
//void ft_print_char(t_parser *p);



#endif
