/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:30:53 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 12:30:56 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_char(t_parser *p)
{
	unsigned char c;

	ft_check_star(p);
	c = va_arg(g_ap, int);
	if (p->alignment == LEFT)
	{
		ft_putchar_fd((char)c, 1);
		ft_fill_width(p->fill_char, p->width - 1);
	}
	else
	{
		ft_fill_width(p->fill_char, p->width - 1);
		ft_putchar_fd((char)c, 1);
	}
}
