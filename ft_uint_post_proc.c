/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_post_proc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:07:46 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 19:07:49 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_uint_pres_post_proc(t_parser *p, unsigned int num)
{
	int digit_len;

	p->fill_char = ' ';
	digit_len = (num >= 0) ? digit_count_u(num) : digit_count_u(num) - 1;
	if (p->precision >= digit_len)
	{
		p->precision = p->precision - digit_len;
		p->precision_flag = (p->precision > 0);
	}
	else
		p->precision = 0;
}

static void	ft_uint_width_post_proc(t_parser *p, unsigned num)
{
	int digit_len;

	digit_len = digit_count_u(num);
	if (p->width > (digit_len + p->precision))
		p->width = p->width - (digit_len + p->precision);
	else
		p->width = 0;
}

void		ft_uint_post_proc(t_parser *p, unsigned int num)
{
	if (p->precision_flag == 1)
		ft_uint_pres_post_proc(p, num);
	ft_uint_width_post_proc(p, num);
}
