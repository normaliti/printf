/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:28:16 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/08 18:28:19 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_print_minus(int num)
{
	if (num < 0)
		ft_fill_width('-', 1);
}

static void	print_number_left(t_parser *p, int num, int old_width)
{
	ft_print_minus(num);
	ft_fill_width('0', p->precision);
	if (!(p->precision_flag == 1 && p->precision == 0 && num == 0))
		ft_putnbr_fd_l(ft_abs_l((long)num), 1);
	else if (old_width)
		ft_putchar_fd(' ', 1);
	ft_fill_width(p->fill_char, p->width);
}

static void	print_number_right(t_parser *p, int num, int old_width)
{
	if (p->fill_char == '0')
		ft_print_minus(num);
	ft_fill_width(p->fill_char, p->width);
	if (p->fill_char == ' ')
		ft_print_minus(num);
	ft_fill_width('0', p->precision);
	if (!(p->precision_flag == 1 && p->precision == 0 && num == 0))
		ft_putnbr_fd_l(ft_abs_l((long)num), 1);
	else if (old_width)
		ft_putchar_fd(' ', 1);
}

void		ft_print_number(t_parser *p)
{
	int num;
	int old_width;

	old_width = p->width;
	ft_check_star(p);
	num = va_arg(g_ap, int);
	if (num == 0 && p->width == 0 && p->precision_flag && p->precision == 0)
		return ;
	ft_int_post_proc(p, num);
	if (p->alignment == LEFT)
		print_number_left(p, num, old_width);
	else
		print_number_right(p, num, old_width);
}
