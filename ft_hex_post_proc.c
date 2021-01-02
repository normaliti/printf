/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_post_proc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:33:13 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 18:33:17 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_hex_pres_post_proc(t_parser *p, char *str)
{
	int str_len;

	p->fill_char = ' ';
	str_len = ft_strlen(str);
	if (p->precision >= str_len)
	{
		p->precision = p->precision - str_len;
		p->precision_flag = (p->precision > 0);
	}
	else
		p->precision = 0;
}

static void	ft_hex_width_post_proc(t_parser *p, char *str)
{
	int str_len;

	str_len = ft_strlen(str);
	if (p->width > (str_len + p->precision))
		p->width = p->width - (str_len + p->precision);
	else
		p->width = 0;
}

void		ft_hex_post_proc(t_parser *p, char *str)
{
	if (p->precision_flag == 1)
		ft_hex_pres_post_proc(p, str);
	ft_hex_width_post_proc(p, str);
}
