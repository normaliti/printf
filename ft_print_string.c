/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:01:16 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 13:01:20 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_string(t_parser *p)
{
	char *str;

	ft_check_star(p);
	str = va_arg(g_ap, char *);
	if (!str)
		str = "(null)";
	ft_str_post_proc(p, str);
	if (p->alignment == LEFT)
	{
		ft_putstr_fd_first_n(str, 1, p->precision);
		ft_fill_width(p->fill_char, p->width);
	}
	else
	{
		ft_fill_width(p->fill_char, p->width);
		ft_putstr_fd_first_n(str, 1, p->precision);
	}
}
