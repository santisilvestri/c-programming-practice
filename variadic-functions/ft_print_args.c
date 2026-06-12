/*
	Assignment name  : ft_print_args
	Expected files   : ft_print_args.c
	Allowed functions: va_start, va_arg, va_end, printf
	--------------------------------------------------------------------------

	Write a function that reads a format string and prints the corresponding
	variadic arguments.

	Supported format characters:
	i -> int
	c -> char
	s -> char *

	Prototype: void ft_print_args(const char *format, ...);

	Example:
	ft_print_args("ics", 42, 'A', "hello");

	Expected output:
	42
	A
	hello
*/

#include <stdarg.h>
#include <stdio.h>

void ft_print_args(const char *format, ...)
{
	va_list args;
	int i;

	i = 0;
	va_start(args, format);
	while(format[i])
	{
		if(format[i] == 'i')
			printf("%d\n", va_arg(args, int));
		else if(format[i] == 'c')
			printf("%c\n", va_arg(args, int));
		else if(format[i] == 's')
			printf("%s\n", va_arg(args, char *));
		i++;
	}
	va_end(args);
}

int main(void)
{
	ft_print_args("ics", 42, 'A', "Hello");
	return (0);
}
