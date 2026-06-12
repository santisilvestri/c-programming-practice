/*
	Assignment name  : ft_count_positive
	Expected files   : ft_count_positive.c
	Allowed functions: va_start, va_arg, va_end
	--------------------------------------------------------------------------

	Write a function that returns how many positive integers appear
	among a variable number of integers.

	The first argument indicates how many integers follow.

	Prototype: int ft_count_positive(int count, ...);
	Example:   ft_count_positive(6, -5, 10, 0, 8, -2, 4) -> 3
*/

#include <stdarg.h>
#include <stdio.h>

int	ft_count_positive(int count, ...)
{
	va_list	args;
	int		i;
	int		positives;
	int		current;

	positives = 0;
	va_start(args, count);
	i = 0;
	while (i < count)
	{
		current = va_arg(args, int);
		if (current > 0)
			positives++;
		i++;
	}
	va_end(args);
	return (positives);
}

int	main(void)
{
	int result;

	result = ft_count_positive(5, -5, -3, 4, 3, -3);
	printf("%d \n", result);
	return (0);
}