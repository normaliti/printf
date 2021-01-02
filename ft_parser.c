/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:31:45 by lweeper           #+#    #+#             */
/*   Updated: 2020/12/08 17:31:49 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_parser_type(char **str, t_parser *p)
{
	if (**str == 'd')
		p->type = 'd';
	else if (**str == 'i')
		p->type = 'i';
	else if (**str == 's')
		p->type = 's';
	else if (**str == 'c')
		p->type = 'c';
	else if (**str == 'p')
		p->type = 'p';
	else if (**str == 'u')
		p->type = 'u';
	else if (**str == 'x')
		p->type = 'x';
	else if (**str == 'X')
		p->type = 'X';
	else if (**str == '%')
		p->type = '%';
}

static void	ft_parser_precision(char **str, t_parser *p)
{
	if (**str == '.')
	{
		p->precision_flag = 1;
		(*str)++;
		if (**str == '*')
		{
			p->precision = -1;
			(*str)++;
		}
		else if (ft_isdigit(**str))
		{
			while (*(*str) == '0')
				(*str)++;
			p->precision = ft_isdigit(**str) ? ft_atoi(*str) : 0;
			if (p->precision != 0 && digit_count(p->precision))
				*str = *str + digit_count(p->precision);
		}
		else
			p->precision = 0;
	}
	else
		return ;
}

static void	ft_parser_width(char **str, t_parser *p)
{
	if (ft_isdigit(**str))
	{
		p->width = ft_atoi(*str);
		*str = *str + digit_count(p->width);
	}
	else if (**str == '*')
	{
		p->width = -1;
		(*str)++;
	}
}

static void	ft_parser_flags(char **str, t_parser *p)
{
	if (**str == '-')
	{
		p->alignment = LEFT;
		(*str)++;
	}
	else if (**str == '0' && p->alignment == RIGHT)
	{
		p->fill_char = '0';
		(*str)++;
	}
}

t_parser	ft_parser(char **str)
{
	t_parser p;

	p.alignment = RIGHT;
	p.fill_char = ' ';
	p.width = 0;
	p.precision_flag = 0;
	p.precision = 0;
	p.type = 'N';
	while (p.type == 'N')
	{
		ft_parser_flags(str, &p);
		ft_parser_width(str, &p);
		ft_parser_precision(str, &p);
		ft_parser_type(str, &p);
	}
	return (p);
}
