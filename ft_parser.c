#include "libftprintf.h"

/*
** ft_parser_dot: парсер точности.
*/



void	ft_parser_type(char **str, t_parser *p)
{
	if (**str == 'd')
		(*p).type = 'd';
	else if (**str == 'i')
		(*p).type = 'i';
	else if (**str == 's')
		(*p).type = 's';
	else if (**str == 'c')
		(*p).type = 'c';
	else if (**str == 'p')
		(*p).type = 'p';
	else if (**str == 'u')
		(*p).type = 'u';
	else if (**str == 'x')
		(*p).type = 'x';
	else if (**str == 'X')
		(*p).type = 'X';
	//else
		//(*p).type = 'N';
	//(*str)++;
}

/*
** ft_parser_dot: парсер точности.
*/

void	ft_parser_precision(char **str, t_parser *p)
{
	if (**str == '.')
	{
		p->precision_flag = 1;
		//p->fill_char = ' ';
		(*str)++;
		if (**str == '*')
		{
			(*p).precision = -1;
			(*str)++;
		}		
		else if(ft_isdigit(**str))
		{
			(*p).precision = ft_atoi(*str);
			*str = *str + digit_count((*p).precision);
		}
		else	
			(*p).precision = 0;	
	}
	else
		return ;
}

/*
** ft_parser_width: парсер ширины.
*/

void	ft_parser_width(char **str, t_parser *p)
{
	if(ft_isdigit(**str))
	{
		(*p).width = ft_atoi(*str);
		*str = *str + digit_count((*p).width);		
	}
	else if (**str == '*')
	{
		(*p).width = -1;
		(*str)++;
	}
}

/*
** ft_parser_flags: парсер флага.
*/

void	ft_parser_flags(char **str, t_parser *p)
{	
	if (**str == '-')
	{
		(*p).alignment = LEFT;	
		(*str)++;
	}						
	else if (**str == '0' && (*p).alignment == RIGHT)
	{
		(*p).fill_char = '0';
		(*str)++;
	}		
}

/*
** ft_parser: парсер строки для печати.
*/

t_parser	ft_parser(char **str)
{
	t_parser p = {RIGHT, ' ',  0,  0, 0, 'N', 0};//make function ft_set_default_parser

	while (p.type == 'N')
	{
		ft_parser_flags(str, &p);
		ft_parser_width(str, &p);
		ft_parser_precision(str, &p);
		ft_parser_type(str, &p);
	}
	return (p);
}
