int ft_abs_i(int a)
{
	return ((a < 0) ? -a: a);
}

long ft_abs_l(long a)
{
	long result;
	if (a > 0)
		result = a;
	else 
		result = a * -1;
	return (result);
}