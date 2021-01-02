/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_zero_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:34:11 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 16:34:16 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_zero_hex_post_proc(t_parser *p)
{
	if (p->precision_flag == 1)
	{
		p->fill_char = ' ';
		if (p->precision < 0)
			p->precision = 0;
		else if (p->precision >= 1)
		{
			p->precision = p->precision - 1;
			p->precision_flag = (p->precision > 0);
		}
	}
	if (p->width > (1 + p->precision))
		p->width = p->width - (1 + p->precision);
	else
		p->width = 0;
}

void		ft_print_zero_hex(t_parser *p)
{
	int old_width;

	old_width = p->width;
	if (p->width == 0 && p->precision_flag && p->precision == 0)
		return ;
	ft_zero_hex_post_proc(p);
	if (p->alignment == LEFT)
	{
		ft_fill_width('0', p->precision);
		if (!(p->precision_flag == 1 && p->precision == 0))
			ft_putnbr_fd(0, 1);
		else if (old_width)
			ft_putchar_fd(' ', 1);
		ft_fill_width(p->fill_char, p->width);
	}
	else
	{
		ft_fill_width(p->fill_char, p->width);
		ft_fill_width('0', p->precision);
		if (!(p->precision_flag == 1 && p->precision == 0))
			ft_putnbr_fd(0, 1);
		else if (old_width)
			ft_putchar_fd(' ', 1);
	}
}
