/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:52:07 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/20 14:52:11 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*void print_type(t_parser p)
{
	if (p.type == 'd' || p.type == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1);
	else if (p.type == 'c')
		ft_putchar_fd((char)va_arg(ap, int), 1);
	else if (p.type == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (p.type == '%')
		ft_putchar_fd('%', 1);
	else if (p.type == 'p')
		ft_print_adress(va_arg(ap, void *));
	else if (p.type == 'u')
		ft_print_unsigned_int(va_arg(ap, int));
	else if (p.type == 'x' || p.type == 'X')
		ft_print_hex_big(va_arg(ap, int));
}*/






int ft_print_line(t_parser *p)
{
	if (p->type == 'd' || p->type == 'i')
		ft_print_number(p);
	/*else if (p.type == 'c')
		ft_print_char(&p);
	else if (p.type == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);*/
	return (42);
}
