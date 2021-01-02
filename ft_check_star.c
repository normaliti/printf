/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_star.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:48:52 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/09 12:48:57 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_check_star(t_parser *p)
{
	int width;
	int pres;

	if (p->width < 0)
	{
		width = va_arg(g_ap, int);
		if (width < 0)
		{
			p->alignment = LEFT;
			p->fill_char = ' ';
		}
		p->width = (width < 0) ? -width : width;
	}
	if (p->precision < 0)
	{
		pres = va_arg(g_ap, int);
		if (pres < 0)
		{
			p->precision_flag = 0;
			p->precision = 0;
		}
		else
			p->precision = (pres < 0) ? 0 : pres;
	}
}
