/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_post_proc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:59:35 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 18:59:39 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_str_pres_post_proc(t_parser *p, char *s)
{
	if (p->precision < 0)
	{
		p->precision_flag = 0;
		p->fill_char = ' ';
	}
	p->precision = ft_min_i(p->precision, ft_strlen(s));
}

static void	ft_str_width_post_proc(t_parser *p, char *s)
{
	if (p->width >= p->precision)
	{
		if (p->precision_flag)
			p->width = p->width - p->precision;
		else
		{
			p->width = p->width - ft_strlen(s);
			p->precision = ft_strlen(s);
		}
	}
	else
	{
		p->width = 0;
		if (!p->precision_flag)
		{
			p->precision_flag = 1;
			p->precision = ft_strlen(s);
		}
	}
}

void		ft_str_post_proc(t_parser *p, char *str)
{
	if (p->precision_flag == 1)
		ft_str_pres_post_proc(p, str);
	ft_str_width_post_proc(p, str);
}
