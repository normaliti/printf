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

int	ft_print_line(t_parser *p)
{
	if (p->type == 'd' || p->type == 'i')
		ft_print_number(p);
	else if (p->type == 'c')
		ft_print_char(p);
	else if (p->type == '%')
		ft_print_percent(p);
	else if (p->type == 's')
		ft_print_string(p);
	else if (p->type == 'u')
		ft_print_uint(p);
	else if (p->type == 'p')
		ft_print_pointer(p);
	else if (p->type == 'X' || p->type == 'x')
		ft_print_hex(p);
	else
		return (-1);
	return (42);
}
