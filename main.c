#include "libftprintf.h" /* Моя библиотека */
#include <stdio.h> /* Для printf */
#include <limits.h>

int		main(void)
{	
	//printf("%x\n", 2147483647);
	//ft_printf("%x", 2147483647);

 /*result1 = ft_printf("text text |%d| |%d| |%s| text |%c| |%X| |%x| |%p| text", -33, 33, "hello", 'g', -555, 555, "World");
 printf("\tmy result: %d\n", result1);
 result2 = printf("text text |%d| |%d| |%s| text |%c| |%X| |%x| |%p| text",  -33, 33, "hello", 'g', -555, 555, "World");
 printf("\tlb result: %d\n\n", result2);

 result1 = ft_printf("|%s| |%3s| |%7s| |%9s| |%-7s|", "hello", "hello", "hello", "hello", "hello");
 printf("\tmy result: %d\n", result1);
 result2 = printf("|%s| |%3s| |%7s| |%9s| |%-7s|",  "hello", "hello", "hello", "hello", "hello");
 printf("\tlb result: %d\n\n", result2);

 result1 = ft_printf("|%*s|", 6, "hello");
 printf("\tmy result: %d\n", result1);
 result2 = printf("|%*s|",  6, "hello");
 printf("\tlb result: %d\n\n", result2);

 result1 = ft_printf("|%*s|", 10, "hello");
 printf("\tmy result: %d\n", result1);
 result2 = printf("|%*s|",  10, "hello");
 printf("\tlb result: %d\n\n", result2);
result1 = ft_printf("string |%%| string |%-4.12d| |%9s| |%7d| |%-12x| |%X| |%x|", 'a', "bcd", 3, -5, 234, 0xac45);
 printf("\nmy result: %d\n", result1);
 result2 = printf("string |%%| string |%-4.12d| |%9s| |%7d| |%-12x| |%X| |%x|", 'a', "bcd", 3, -5, 234, 0xac45);
 printf("\nlb result: %d\n\n", result2);*/


	/*int		j = -12;

	printf("%x, %X\n",j, j);
	ft_printf("%x, %X\n",j, j);
	printf("%x\n", 4294967295u);
	ft_printf("%x", 4294967295u);*/
	
	//int result1, result2;
	//char *format;
/*
puts("-------------------------------xX--------------------------------");
 result1 = ft_printf("|%0*.*x| |%07.3x| |%-.3x| |%010.9X|", -16, 10, -2312, 125, INT_MAX, INT_MIN);
 printf("\t\tmy result: %d\n", result1);
 result2 = printf("|%0*.*x| |%07.3x| |%-.3x| |%010.9X|", -16, 10, -2312, 125, INT_MAX, INT_MIN);
 printf("\t\tlb result: %d\n\n", result2);

 result1 = ft_printf("|%0.0x| |%6.0x| |%0.1x| |%05.1x| |%0.0x| |%0.1x|", 0, 0, 0, 0, 1, 1);
 printf("\t\tmy result: %d\n", result1);
 result2 = printf("|%0.0x| |%6.0x| |%0.1x| |%05.1x| |%0.0x| |%0.1x|",  0, 0, 0, 0, 1, 1);
 printf("\t\tlb result: %d\n\n", result2);

 result1 = ft_printf("|%-.0X| |%-6.0X| |%-.1X| |%-1.1X| |%-.0X| |%-.1X|", 0, 0, 0, 0, 1, 1);
 printf("\t\tmy result: %d\n", result1);
 result2 = printf("|%-.0X| |%-6.0X| |%-.1X| |%-1.1X| |%-.0X| |%-.1X|",  0, 0, 0, 0, 1, 1);
 printf("\t\tlb result: %d\n\n", result2);

 result1 = ft_printf("|%*.*x| |%08.3x| |%0*x|", 8, 4, 2, 8375, -5, -54);
 printf("\t\tmy result: %d\n", result1);
 result2 = printf("|%*.*x| |%08.3x| |%0*x|", 8, 4, 2, 8375, -5, -54);
 printf("\t\tlb result: %d\n\n", result2);

 result1 = ft_printf("|%0*x|", 7, -54);
 printf("\t\tmy result: %d\n", result1);
 result2 = printf("|%0*x|", 7, -54);
 printf("\t\tlb result: %d\n\n", result2);

 result1 = ft_printf("%% *.5x 42 == |%*.5x|", 4, 42);
 printf("\t\tmy result: %d\n", result1);
 result2 = printf("%% *.5x 42 == |%*.5x|", 4, 42);
 printf("\t\tlb result: %d\n\n", result2);
*/

	//printf("|%-8.12s|\n", NULL);
	//ft_printf("|%-8.12s|\n", NULL);
	//int a = 4556265;
	//printf("1|h %5X|\n", a);
	//ft_printf("1|h %5X|\n", a);
	//printf("%-05.7X\n", 0);
	//ft_printf("%-05.7X\n", 0);
	/*printf("1 this %X number\n", 0);
	printf("2 %3X\n", 0);
	printf("3 %-3X\n", 0);
	printf("4 %.*X\n", -1, 0);
	printf("5 this %-2X number\n", 0);
	printf("6 %3.5X\n", 0);
	printf("7 %010.5X\n", 0);
	printf("8 |%3.1X|\n\n", 0);
	printf("9 |%0.0X|\n\n", 0);
	printf("9 |%10.5X|\n\n", 0);

	ft_printf("1 this %X number\n", 0);
	ft_printf("2 %3X\n", 0);
	ft_printf("3 %-3X\n", 0);
	ft_printf("4 %.*X\n", -1, 0);
	ft_printf("5 this %-2X number\n", 0);
	ft_printf("6 %3.5X\n", 0);
	ft_printf("7 %010.5X\n", 0);
	ft_printf("8 |%3.1X|\n\n", 0);
	ft_printf("9 |%0.0X|\n\n", 0);
	ft_printf("9 |%10.5X|\n\n", 0);*/

	/*printf("2|h %0x|\n", a);
	printf("3|h %020x|\n", a);
	printf("4|h %-0x|\n", a);
	printf("5|h %-020x|\n", a);
	printf("6|h %-2.20x|\n", a);
	printf("7|h %.5x|\n", a);
	printf("8|h %.*x|\n", -2, a);
	printf("9|h %.x|\n", a);
	printf("0|h %020.x|\n", a);
	
	printf("1|H %5X|\n", a);
	printf("2|H %0X|\n", a);
	printf("3|H %20X|\n", a);
	printf("4|H %-0X|\n", a);
	printf("5|H %-20X|\n", a);
	printf("6|H %.20X|\n", a);
	printf("7|H %.5X|\n", a);
	printf("8|H %.*X|\n", -2, a);
	printf("9|H %.X|\n", a);
	printf("0|H %020.X|\n", a);*/
	
	
	
	/*
	int res_pf;
	int res_my;
	res_my = ft_printf("my: |%*.*s|\n", -7, -3, "yolo");
	res_pf = printf("pf: |%*.*s|\n", -7, -3, "yolo");
	printf("len my: %d\n", res_my);
	printf("len pf: %d\n", res_pf);
	*/
	//ft_printf("%3s", "Hello world");
	//int a;
	//printf("|ad a:%10p|\n", &a);
	//ft_printf("|ad a:%10p|\n", &a);
	
	/*printf("1|ad a:%5p|\n", &a);
	printf("2|ad a:%0p|\n", &a);
	printf("3|ad a:%20p|\n", &a);
	printf("4|ad a:%-0p|\n", &a);
	printf("5|ad a:%-20p|\n", &a);
	printf("6|ad a:%.20p|\n", &a);
	printf("7|ad a:%.5p|\n", &a);
	printf("8|ad a:%.*p|\n", -2, &a);
	printf("9|ad a:%.p|\n", &a);
	printf("9|ad a:%020.p|\n", &a);
	
	ft_printf("1|ad a:%5p|\n", &a);
	ft_printf("2|ad a:%0p|\n", &a);
	ft_printf("3|ad a:%20p|\n", &a);
	ft_printf("4|ad a:%-0p|\n", &a);
	ft_printf("5|ad a:%-20p|\n", &a);
	ft_printf("6|ad a:%.20p|\n", &a);
	ft_printf("7|ad a:%.5p|\n", &a);
	ft_printf("8|ad a:%.*p|\n", -2, &a);
	ft_printf("9|ad a:%.p|\n", &a);
	ft_printf("9|ad a:%020.p|\n", &a);*/
	
	/*int result1;
	int result2;
	char *format;
	puts("\n--------------------------------u--------------------------------");
	format = "|%-5.12u| |%-.3u| |%*.0u| |%12u| |%-5.1u| |%2.6u| ";
	result1 = ft_printf(format, -21, 144, -3, 1, INT_MAX, 10, 234);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, -21, 144, -3, 1, INT_MAX, 10, 234);
	printf("\t\tlb result: %d\n\n", result2);
	format = "|%0.0u| |%6.0u| |%0.1u| |%05.1u| |%0.0u| |%0.1u|";
	result1 = ft_printf(format, 0, 0, 0, 0, 1, 1);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format,  0, 0, 0, 0, 1, 1);
	printf("\t\tlb result: %d\n\n", result2);
	format = "|%-0.0u| |%-6.0u| |%-0.1u| |%-1.1u| |%-0.0u| |%-0.1u|";
	result1 = ft_printf(format, 0, 0, 0, 0, 1, 1);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format,  0, 0, 0, 0, 1, 1);
	printf("\t\tlb result: %d\n\n", result2);
	format = "|%*.*u| |%08.3u| |%0*u|";
	result1 = ft_printf(format, 8, 4, 2, 8375, -5, -54);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 8, 4, 2, 8375, -5, -54);
	printf("\t\tlb result: %d\n\n", result2);
	format = "|%0*u|";
	result1 = ft_printf(format, 7, -54);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 7, -54);
	printf("\t\tlb result: %d\n\n", result2);
	format = "%% *.5u 42 == |%*.5u|";
	result1 = ft_printf(format, 4, 42);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 4, 42);
	printf("\t\tlb result: %d\n\n", result2);
	format = "|%.4u|";
	result1 = ft_printf(format, 2372);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 2372);
	printf("\t\tlb result: %d\n\n", result2);*/

	/*
	printf("|hello, %s.|\n", NULL);
	ft_printf("|hello, %s.|\n", NULL);
	printf("|%.3s|\n", NULL);
	ft_printf("|%.3s|\n", NULL);
	printf("|%32s|\n", NULL);
	ft_printf("|%32s|\n", NULL);
	printf("|%2s|\n", NULL);
	ft_printf("|%2s|\n", NULL);
	printf("|%-32s|\n", NULL);
	ft_printf("|%-32s|\n", NULL);
	printf("|%-16s|\n", NULL);
	ft_printf("|%-16s|\n", NULL);
	printf("|%-3s|\n", NULL);
	ft_printf("|%-3s|\n", NULL);
	printf("|%7.5s|\n", "bombastic");
	ft_printf("|%7.5s|\n", "bombastic");
	
	printf("|%.7s|\n", "hello");
	ft_printf("|%.7s|\n", "hello");
	printf("|%.3s|\n", "hello");
	ft_printf("|%.3s|\n", "hello");
	printf("|%.s|\n", "hello");
	ft_printf("|%.s|\n", "hello");
	printf("|.0s|\n", "hello");
	ft_printf("|.0s|\n", "hello");
	printf("|%.3s%.2s|\n", "holla", "bitch");
	ft_printf("|%.3s%.2s|\n", "holla", "bitch");
	printf("|%.2s%.7s|\n", "hello", "world");
	ft_printf("|%.2s%.7s|\n", "hello", "world");


	printf("1|%s|\n", "123 Hello");
	ft_printf("1|%s|\n", "123 Hello");
	printf("2|%5s|\n", "goes over");
	ft_printf("2|%5s|\n", "goes over");

	printf("2|%-5s|\n", "goes over");
	ft_printf("2|%-5s|\n", "goes over");

	printf("3|%5s|\n", "123 Hello");
	ft_printf("3|%5s|\n", "123 Hello");
	printf("4|%8s|\n", "123 Hello");
	ft_printf("4|%8s|\n", "123 Hello");
	printf("5|%0s|\n", "123 Hello");
	ft_printf("5|%0s|\n", "123 Hello");
	*/

	//printf("%.0s", "hello");
	//ft_printf("%.0s", "hello");

	/*
	printf("6|%.1s|\n", "123Hello");
	printf("7|%.8s|\n", "123Hello");
	printf("8|%10s|\n", "123Hello");
	printf("9|%.0s|\n", "123Hello");

	printf("=====================><=======================\n");

	printf("10|%0s|\n", "123Hello");
	printf("11|%-010s|\n", "123Hello");
	printf("12|%05s|\n", "123Hello");
	printf("13|%08s|\n", "123Hello");
	printf("14|%00s|\n", "123Hello");
	
	printf("15|%010.4s|\n", "123Hello");
	printf("16|%10.8s|\n", "123Hello");
	printf("17|%10.10s|\n", "123Hello");
	printf("18|%10.0s|\n", "123Hello");

	printf("=====================><=======================\n");

	printf("|%-s|\n", "123Hello");
	printf("|%-10s|\n", "123Hello");
	printf("|%-5s|\n", "123Hello");
	printf("|%-8s|\n", "123Hello");
	printf("|%-0s|\n", "123Hello");
	printf("|%-.1s|\n", "123Hello");
	printf("|%-.8s|\n", "123Hello");
	printf("|%-.10s|\n", "123Hello");
	printf("|%-.0s|\n", "123Hello");

	printf("=====================><=======================\n");

	printf("|%*s|\n", 10, "123Hello");
	printf("|%*s|\n", 5, "123Hello");
	printf("|%*s|\n", 0, "123Hello");
	printf("|%*s|\n", -1, "123Hello");
	printf("|%.*s|\n", 5, "123Hello");
	printf("|%.*s|\n", 0, "123Hello");
	printf("|%.*s|\n", 10, "123Hello");
	printf("|%.*s|\n", -1, "123Hello");
	printf("|%.*s|\n", -8, "123Hello");

	printf("=====================><=======================\n");

	*/

	/*printf("example1 %7.*d\n", -10, 123);
	printf("example1 %10.*s\n", -20, "123");
	printf("example1 %10.*s\n", 2, "123");
	printf("example4 %010dijio\n",-666);
	printf("example4 %10dijio\n",-666);*/
	/* Тестирование */

	/* Testing 'd' and 'i'*/
	/*printf("o = %6d\n", 1234);
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

	printf("|o = %.0djty|\n", 0);
	ft_printf("|m = %.0djty|\n", 0);
	printf("========><========\n");

	printf("|o = %.djty|\n", 0);
	ft_printf("|m = %.djty|\n", 0);
	printf("========><========\n");

	printf("|o = %5.0djty|\n", 0);
	ft_printf("|m = %5.0djty|\n", 0);
	printf("========><========\n");

	printf("|o = %5.djty|\n", 0);
	ft_printf("|m = %5.djty|\n", 0);
	printf("========><========\n");

	printf("|o = %-5.0djty|\n", 0);
	ft_printf("|m = %-5.0djty|\n", 0);
	printf("========><========\n");

	printf("|o = %-5.djty|\n", 0);
	ft_printf("|m = %-5.djty|\n", 0);
	printf("========><========\n");*/

	/*printf("|o = %5.-1djty|\n", 12);
	ft_printf("|m = %5.-1djty|\n", 12);
	printf("========><========\n");*/

	/*printf("p |%-4.11d|\n", INT_MIN);
	ft_printf("m |%-4.11d|\n", INT_MIN);*/


	/*Testing char*/
	/*char str[14] = "Hello, world!";
	
	printf("|o = %6c|\n", str[0]);
	ft_printf("|m = %6c|\n", str[0]);
	printf("========><========\n");

	printf("|o = %-6c|\n", str[1]);
	ft_printf("|m = %-6c|\n", str[1]);
	printf("========><========\n");

	printf("|o = %-00*c|\n", 7, str[3]);
	ft_printf("|m = %-00*c|\n", 7, str[3]);
	printf("========><========\n");

	printf("|o = %-*.4c|\n", 7, str[3]);
	ft_printf("|m = %-*.4c|\n", 7, str[3]);
	printf("========><========\n");*/

	//printf("digit_number is %d\n", digit_count(123));
	//printf("%c\n%d\n%c\n%d\n%c\n", a.flags, a.width, a.dot, a.number_after_dot, a.type);
//	printf("%7d", 21);

	//ft_putnbr_fd(0,1);
	//printf("\nd_c 0 = %d", digit_count(0));

	/*int result1;
	int result2;
	char *format;
	puts("\n-------------------------------di--------------------------------");
	format = "|%-4.11d| |%-4.12i| |%-12.7d| |%06.4d|";
	result1 = ft_printf(format, INT_MIN, 234, 44444, -13);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, INT_MIN, 234, 44444, -13);
	printf("\t\tlb result: %d\n\n", result2);
	format = "|%*.*d| |%08.3d| |%0*i|";
	result1 = ft_printf(format, 8, 4, 2, 8375, -5, -54);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 8, 4, 2, 8375, -5, -54);
	printf("\t\tlb result: %d\n\n", result2);
	
	format = "|%0.1d| |%05.1d|";
	result1 = ft_printf(format, 0, 0);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 0, 0);
	printf("\t\tlb result: %d\n\n", result2);

	format = "|%0.1d| |%05.1d|";
	result1 = ft_printf(format, 5, 0);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 5, 0);
	printf("\t\tlb result: %d\n\n", result2);
	
	format = "|%-0.0d| |%-6.0d|";
	result1 = ft_printf(format, 0, 0);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 0, 0);
	printf("\t\tlb result: %d\n\n", result2);
	
	format = "|%0*i|";
	result1 = ft_printf(format, 7, -54);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 7, -54);
	printf("\t\tlb result: %d\n\n", result2);
	format = "%% *.5i 42 == |%*.5i|";
	result1 = ft_printf(format, 4, 42);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 4, 42);
	printf("\t\tlb result: %d\n\n", result2);
	format = "|%.5d|";
	result1 = ft_printf(format, -2372);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, -2372);
	printf("\t\tlb result: %d\n\n", result2);


	format = "|%1.d|";
	result1 = ft_printf(format, 0);
	printf("\t\tmy result: %d\n", result1);
	result2 = printf(format, 0);
	printf("\t\tlb result: %d\n\n", result2);*/
	
	printf("%5.p\n", NULL);
	ft_printf("%5.p\n", NULL);
	return (0);
}
