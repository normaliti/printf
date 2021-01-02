/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:00:12 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 17:00:16 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	make_hex(unsigned int num, char *str, int flag)
{
	int i;
	int mod;

	i = 0;
	while (num > 0)
	{
		mod = num % 16;
		if (mod > 9)
		{
			if (flag)
				str[i] = 'A' + mod - 10;
			else
				str[i] = 'a' + mod - 10;
		}
		else
			str[i] = '0' + mod;
		num = num / 16;
		++i;
	}
	ft_reverse(str);
}

void		ft_print_hex_left(t_parser *p, char *str)
{
	ft_fill_width('0', p->precision);
	ft_putstr_fd(str, 1);
	ft_fill_width(p->fill_char, p->width);
}

void		ft_print_hex_right(t_parser *p, char *str)
{
	ft_fill_width(p->fill_char, p->width);
	ft_fill_width('0', p->precision);
	ft_putstr_fd(str, 1);
}

void		ft_print_hex(t_parser *p)
{
	unsigned int	num;
	char			str[18];
	int				flag;

	flag = (p->type == 'X') ? 1 : 0;
	ft_bzero(str, 18);
	ft_check_star(p);
	num = va_arg(g_ap, unsigned int);
	if (num == 0)
	{
		ft_print_zero_hex(p);
		return ;
	}
	make_hex(num, str, flag);
	ft_hex_post_proc(p, str);
	if (p->alignment == LEFT)
		ft_print_hex_left(p, str);
	else
		ft_print_hex_right(p, str);
}
