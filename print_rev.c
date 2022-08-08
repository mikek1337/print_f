#include <stdarg.h>
#include "main.h"

/**
 * print_rev - reverses any string
 * @l: variable list
 * Return: number of characters
 */
int print_rev(va_list l)
{
	 int j;
	 int i = 0;
	 char *s = va_arg(l, char *);
	while (*s != '\0')
	{
		s++;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_writechar(s[j]);
		j--;
	}
	return (i);
}
