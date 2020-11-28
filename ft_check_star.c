#include "libftprintf.h"

void ft_check_star(t_parser *p)
{
	int width;
	int pres;

	if(p->width < 0)
	{
		width = va_arg(ap, int);
		if (width < 0)
		{
			p->alignment = LEFT;
			p->fill_char = ' ';
		}
		p->width = (width < 0) ? -width : width;
	}		
	if(p->precision < 0)
	{
		pres = va_arg(ap, int);
		p->precision = (pres < 0) ? 0 : pres;
	}		
}