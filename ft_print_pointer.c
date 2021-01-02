/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:42:15 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 15:42:23 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_dec_to_hex(char *address, char *str)
{
	long int	li;
	int			i;
	int			mod;

	i = 0;
	ft_memcpy(&li, &address, sizeof(void*));
	while (li > 0)
	{
		mod = li % 16;
		if (mod > 9)
			str[i] = 'a' + mod - 10;
		else
			str[i] = '0' + mod;
		li = li / 16;
		++i;
	}
	str[i] = 'x';
	str[++i] = '0';
}

static void	make_address(char *address, char *str)
{
	ft_dec_to_hex(address, str);
	ft_reverse(str);
}

static void	ft_print_pointer_left(t_parser *p, char *str, void **pointer)
{
	ft_putstr_fd_first_n(str, 1, 2);
	ft_fill_width('0', p->precision);
	if (!(*pointer) && !(p->precision == 0 && p->precision_flag == 1))
		ft_putchar_fd('0', 1);
	else
		ft_putstr_fd(&str[2], 1);
	ft_fill_width(p->fill_char, p->width);
}

static void	ft_print_pointer_right(t_parser *p, char *str, void **pointer)
{
	ft_fill_width(p->fill_char, p->width);
	ft_putstr_fd_first_n(str, 1, 2);
	ft_fill_width('0', p->precision);
	if (!(*pointer) && !(p->precision == 0 && p->precision_flag == 1))
		ft_putchar_fd('0', 1);
	else
		ft_putstr_fd(&str[2], 1);
}

void		ft_print_pointer(t_parser *p)
{
	void *pointer;
	char str[17];

	ft_bzero(str, 17);
	ft_check_star(p);
	pointer = va_arg(g_ap, char *);
	make_address(pointer, str);
	ft_pointer_post_proc(p, str);
	p->width -= (!pointer);
	p->width += (p->precision == 0 && p->precision_flag == 1);
	if (p->alignment == LEFT)
		ft_print_pointer_left(p, str, &pointer);
	else
		ft_print_pointer_right(p, str, &pointer);
}
