/*
	Assignment name  : ft_strcpy
	Expected files   : ft_strcpy.c
	Allowed functions:
	--------------------------------------------------------------------------------

	Reproduce the behavior of the function strcpy (man strcpy).

	Your function must be declared as follows:

	char	*ft_strcpy(char *s1, char *s2);
 */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src);
}

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char s1[50];
	char *s2 = "Hello World";

	ft_strcpy(s1, s2);
	printf("%s\n%s\n", s1, s2);
	return (0);
}