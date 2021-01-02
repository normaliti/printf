/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:12:17 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/08 15:12:24 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int g_str_counter;

int		ft_printf(const char *format, ...)
{
	t_parser p;

	g_str_counter = 0;
	va_start(g_ap, format);
	while (*format)
	{
		if (*format != '%')
			ft_putchar_fd(*format, 1);
		else
		{
			format++;
			p = ft_parser((char **)&format);
			ft_print_line(&p);
		}
		format++;
	}
	va_end(g_ap);
	return (g_str_counter);
}
