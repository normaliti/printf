#include "libftprintf.h"
#include "stdio.h"

void print_parser(t_parser p)
{
	printf("parser: %i, %c, %d, %d, %d, %c, %d\n", p.alignment, p.fill_char, p.width, p.precision_flag, p.precision, p.type, p.count);
}

int		ft_printf(const char *format, ...)
{
	t_parser p;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;			
			p = ft_parser((char **)&format);
			//print_parser(p);
			ft_print_line(&p);
			count+=p.count;
		}
		format++;
	}
	va_end(ap);
	return (count);
}

