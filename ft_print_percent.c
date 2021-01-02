/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:58:49 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 12:58:53 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_percent(t_parser *p)
{
	ft_check_star(p);
	if (p->alignment == LEFT)
	{
		ft_putchar_fd('%', 1);
		ft_fill_width(p->fill_char, p->width - 1);
	}
	else
	{
		ft_fill_width(p->fill_char, p->width - 1);
		ft_putchar_fd('%', 1);
	}
}
