/*
	Assignment name  : ft_sum
	Expected files   : ft_sum.c
	Allowed functions: va_start, va_arg, va_end
	--------------------------------------------------------------------------
	**
	Write a function that returns the sum of a variable number of integers.
	The first argument indicates how many integers follow.

	Prototype: int ft_sum(int count, ...);
	Example:   ft_sum(5, 10, 20, 30, 600, 70) -> 730
*/

#include <stdarg.h>
#include <stdio.h>

int	ft_sum(int count, ...)
{
	va_list	args;
	int		total;
	int		i;

	total = 0;
	i = 0;
	va_start(args, count);
	while (i < count)
	{
		total = total + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (total);
}

int	main(void)
{
	int	result;

	result = ft_sum(5, 10, 20, 30, 600, 70);
	printf("Result: %d\n", result);
	return (0);
}
