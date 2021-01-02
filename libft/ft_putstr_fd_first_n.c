#include "libft.h"

void	ft_putstr_fd_first_n(char *s, int fd, int count)
{
	int i;

	i = 0;
	while (s[i] != '\0' && count)
	{
		ft_putchar_fd(s[i], fd);
		i++;
        count--;
	}
}
