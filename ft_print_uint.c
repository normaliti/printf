/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:05:58 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 13:08:04 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_print_uint_left(t_parser *p, unsigned int num, int old_width)
{
	ft_fill_width('0', p->precision);
	if (!(p->precision_flag == 1 && p->precision == 0 && num == 0))
		ft_putnbr_fd_l((long)num, 1);
	else if (old_width)
		ft_putchar_fd(' ', 1);
	ft_fill_width(p->fill_char, p->width);
}

static void	ft_print_uint_right(t_parser *p, unsigned int num, int old_width)
{
	ft_fill_width(p->fill_char, p->width);
	ft_fill_width('0', p->precision);
	if (!(p->precision_flag == 1 && p->precision == 0 && num == 0))
		ft_putnbr_fd_l((long)num, 1);
	else if (old_width)
		ft_putchar_fd(' ', 1);
}

void		ft_print_uint(t_parser *p)
{
	unsigned int	num;
	int				old_width;

	old_width = p->width;
	ft_check_star(p);
	num = va_arg(g_ap, unsigned int);
	if (num == 0 && p->width == 0 && p->precision_flag && p->precision == 0)
		return ;
	ft_uint_post_proc(p, num);
	if (p->alignment == LEFT)
		ft_print_uint_left(p, num, old_width);
	else
		ft_print_uint_right(p, num, old_width);
}
