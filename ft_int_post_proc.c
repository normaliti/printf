/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_post_proc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:38:21 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 18:38:24 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_int_pres_post_proc(t_parser *p, int num)
{
	int digit_len;

	p->fill_char = ' ';
	digit_len = (num >= 0) ? digit_count(num) : digit_count(num) - 1;
	if (p->precision >= digit_len)
	{
		p->precision = p->precision - digit_len;
		p->precision_flag = (p->precision > 0);
	}
	else
		p->precision = 0;
}

static void	ft_int_width_post_proc(t_parser *p, int num)
{
	int digit_len;

	digit_len = digit_count(num);
	if (p->width > (digit_len + p->precision))
		p->width = p->width - (digit_len + p->precision);
	else
		p->width = 0;
}

void		ft_int_post_proc(t_parser *p, int num)
{
	if (p->precision_flag == 1)
		ft_int_pres_post_proc(p, num);
	ft_int_width_post_proc(p, num);
}
