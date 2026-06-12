/*
	Assignment name  : ft_count_printed
	Expected files   : ft_count_printed.c
	Allowed functions: va_start, va_arg, va_end, printf
	--------------------------------------------------------------------------

	Write a function that prints variadic arguments according to a format string
	and returns the total number of printed characters.

	Supported format characters:
	i -> int
	c -> char
	s -> char *

	Prototype: int ft_count_printed(const char *format, ...);

	Example:
	ft_count_printed("cs", 'A', "hello") -> 6

	Output:
	Ahello
*/

#include <stdarg.h>
#include <stdio.h>

int	ft_count_printed(const char *format, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == 'i')
			total += printf("%d", va_arg(args, int));
		else if (format[i] == 'c')
			total += printf("%c", va_arg(args, int));
		else if (format[i] == 's')
			total += printf("%s", va_arg(args, char *));
		i++;
	}
	va_end(args);
	return (total);
}

int	main(void)
{
	int	result;

	result = ft_count_printed("cs", 'A', "hello");
	printf("\nTotal: %d\n", result);
	return (0);
}
