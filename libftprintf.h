/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:19:40 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/04 17:20:21 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "stdio.h"
# include "libft.h"

typedef enum		e_aligment
{
	RIGHT,
	LEFT
}					t_aligment;
typedef struct		s_parser
{
	t_aligment		alignment;
	char			fill_char;
	int				width;
	int				precision_flag;
	int				precision;
	char			type;
}					t_parser;

va_list				g_ap;
int					ft_printf(const char *format, ...);
void				ft_reverse(char s[]);
void				ft_print_unsigned_int(int a);
void				ft_print_adress(void *a);
int					dec_in_bin(int num);
void				ft_putstr_fd_print_int_str(char *s, int fd, int f);
t_parser			ft_parser(char **str);
void				ft_print_number(t_parser *p);
int					ft_print_line(t_parser *p);
int					digit_count (int a);
void				ft_fill_width(char c, int n);
void				ft_check_star(t_parser *p);
void				ft_int_post_proc(t_parser *p, int num);
void				ft_print_char(t_parser *p);
void				ft_print_percent(t_parser *p);
void				ft_print_string(t_parser *p);
void				ft_str_post_proc(t_parser *p, char *str);
void				ft_print_uint(t_parser *p);
void				ft_print_pointer(t_parser *p);
void				ft_uint_post_proc(t_parser *p, unsigned int num);
int					digit_count_u(unsigned int a);
void				ft_pointer_post_proc(t_parser *p, char *str);
void				ft_print_hex(t_parser *p);
void				ft_hex_post_proc(t_parser *p, char *str);
void				ft_print_zero_hex(t_parser *p);
#endif
