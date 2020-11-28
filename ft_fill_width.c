#include "libftprintf.h"

void ft_fill_width(char c, int n)
{
	while(n-- > 0)
		ft_putchar_fd(c,1);
}