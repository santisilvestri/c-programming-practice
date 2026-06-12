/*
	Assignment name  : ft_max
	Expected files   : ft_max.c
	Allowed functions: va_start, va_arg, va_end
	--------------------------------------------------------------------------

	Write a function that returns the largest value among a variable
	number of integers.

	The first argument indicates how many integers follow.
	You may assume that count is greater than 0.

	Prototype: int ft_max(int count, ...);
	Example:   ft_max(5, 100, 200, 3, 4, 6) -> 200
*/

#include <stdio.h>

int	ft_max(int count, ...)
{
	va_list	args;
	int		max;
	int		i;
	int		current;

	va_start(args, count);
	max = va_arg(args, int);
	i = 1;
	while (i < count)
	{
		current = va_arg(args, int);
		if (max < current)
			max = current;
		i++;
	}
	va_end(args);
	return (max);
}

int	main(void)
{
	int	result;

	result = ft_max(5, 100, 200, 3, 4, 6);
	printf("%d \n", result);
	return (0);
}
