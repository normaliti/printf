#include "libftprintf.h"

void ft_print_number(t_parser *p)
{
	int num;
	
	ft_check_star(p);
	num	= va_arg(ap, int);
	ft_int_post_proc(p, num);
	if (p->alignment == LEFT)
	{	
		if(num < 0)
			ft_fill_width('-', 1);
		ft_fill_width('0', p->precision);
		ft_putnbr_fd((num < 0)? -num: num, 1);
		ft_fill_width(p->fill_char, p->width);
	}
	else 
	{
		if(num < 0 && p->fill_char == '0')
		{
			ft_fill_width('-', 1);
			num *= -1;
		}			
		ft_fill_width(p->fill_char, p->width);
		if (num < 0 && p->fill_char == ' ')
		{
			ft_fill_width('-', 1);
			num *= -1;
		}		
		ft_fill_width('0', p->precision);
		ft_putnbr_fd(num, 1);		
	}
}