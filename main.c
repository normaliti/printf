#include "libftprintf.h" /* Моя библиотека */
#include <stdio.h> /* Для printf */



int		main(void)
{	
	/*printf("example1 %7.*d\n", -10, 123);
	printf("example1 %10.*s\n", -20, "123");
	printf("example1 %10.*s\n", 2, "123");
	printf("example4 %010dijio\n",-666);
	printf("example4 %10dijio\n",-666);*/
	/* Тестирование */

	/* Testing 'd' and 'i'*/
	printf("o = %6d\n", 1234);
	ft_printf("m = %6d\n", 1234);
	printf("========><========\n");

	printf("o = %3d\n", 1234);
	ft_printf("m = %3d\n", 1234);
	printf("========><========\n");

	printf("o = %-3d\n", 1234);
	ft_printf("m = %-3d\n", 1234);
	printf("========><========\n");

	printf("o = %-6d\n", 1234);
	ft_printf("m = %-6d\n", 1234);
	printf("========><========\n");

	printf("o = %06d\n", 1234);
	ft_printf("m = %06d\n", 1234);
	printf("========><========\n");

	printf("o = %0*d\n", 7, 1234);
	ft_printf("m = %0*d\n", 7, 1234);
	printf("========><========\n");

	printf("o = %6d\n", -123);
	ft_printf("m = %6d\n", -123);
	printf("========><========\n");

	printf("o = %-6d\n", -123);
	ft_printf("m = %-6d\n", -123);
	printf("========><========\n");

	printf("o = %06d\n", -123);
	ft_printf("m = %06d\n", -123);
	printf("========><========\n");

	printf("o = %0*d\n", 7, -123);
	ft_printf("m = %0*d\n", 7, -123);
	printf("========><========\n");

	printf("o = %10.5d jkrghrth\n", 1234);
	ft_printf("m = %10.5d jkrghrth\n", 1234);
	printf("========><========\n");

	printf("o = %-10.5d jkrghrth\n", 1234);
	ft_printf("m = %-10.5d jkrghrth\n", 1234);
	printf("========><========\n");

	printf("o = %-.5d jkrghrth\n", 1234);
	ft_printf("m = %-.5d jkrghrth\n", 1234);
	printf("========><========\n");

	printf("o = %.5d jkrghrth\n", 1234);
	ft_printf("m = %.5d jkrghrth\n", 1234);
	printf("========><========\n");

	printf("o = %10.3d jkrghrth\n", 1234);
	ft_printf("m = %10.3d jkrghrth\n", 1234);
	printf("========><========\n");

	printf("o = %10.5d jkrghrth\n", -123);
	ft_printf("m = %10.5d jkrghrth\n", -123);
	printf("========><========\n");

	printf("o = %-10.5d jkrghrth\n", -123);
	ft_printf("m = %-10.5d jkrghrth\n", -123);
	printf("========><========\n");

	printf("o = %-.5d jkrghrth\n", -123);
	ft_printf("m = %-.5d jkrghrth\n", -123);
	printf("========><========\n");

	printf("o = %.5d jkrghrth\n", -123);
	ft_printf("m = %.5d jkrghrth\n", -123);
	printf("========><========\n");

	printf("o = %10.3d jkrghrth\n", -123);
	ft_printf("m = %10.3d jkrghrth\n", -123);
	printf("========><========\n");

	printf("o = %010.5d jkrghrth\n", -123);
	ft_printf("m = %010.5d jkrghrth\n", -123);
	printf("========><========\n");

	printf("o = %010.5d jkrghrth\n", 123);
	ft_printf("m = %010.5d jkrghrth\n", 123);
	printf("========><========\n");

	printf("o = %010.5d jkrghrth\n", 0);
	ft_printf("m = %010.5d jkrghrth\n", 0);
	printf("========><========\n");

	printf("TEST WITH ZERO\n");

	printf("o = %.0djty\n", 0);
	ft_printf("m = %.0djty\n", 0);
	printf("========><========\n");

	printf("o = %.djty\n", 0);
	ft_printf("m = %.djty\n", 0);
	printf("========><========\n");

	printf("o = %5.0djty\n", 0);
	ft_printf("m = %5.0djty\n", 0);
	printf("========><========\n");

	printf("o = %5.djty\n", 0);
	ft_printf("m = %5.djty\n", 0);
	printf("========><========\n");

	printf("o = %-5.0djty\n", 0);
	ft_printf("m = %-5.0djty\n", 0);
	printf("========><========\n");

	printf("o = %-5.djty\n", 0);
	ft_printf("m = %-5.djty\n", 0);
	printf("========><========\n");

	/*Testing char*/
	/*char str[14] = "Hello, world!";
	
	printf("o = %6c\n", str[0]);
	//ft_printf("m = %6c\n", str[0]);
	printf("========><========\n");

	printf("o = %-6c\n", str[1]);
	//ft_printf("m = %-6d\n", str[1]);
	printf("========><========\n");

	printf("o = %*c\n", 7, str[3]);
	//ft_printf("m = %0*d\n", 7, str[3]);
	printf("========><========\n");*/



	//printf("digit_number is %d\n", digit_count(123));
	//printf("%c\n%d\n%c\n%d\n%c\n", a.flags, a.width, a.dot, a.number_after_dot, a.type);
//	printf("%7d", 21);

	//ft_putnbr_fd(0,1);
	//printf("\nd_c 0 = %d", digit_count(0));
	return (0);
}
