#include <stdarg.h>
#include "main.h"

/**
 * print_rot13 - encrypts string using rot13 algorithm
 * @l: variable list
 * Return: number of characters printed
 */
int print_rot13(va_list l)
{
	 int count = 0;
	 char *s = va_arg(l, char *);
	while (*s != '\0')
	{
		if (*s >= 65 && *s < 91)
		{
			if (*s <= 77)
				count += _writechar(*s + 13);
			else
				count += _writechar(*s - 13);
		}
		else if (*s >= 97 && *s < 123)
		{
			if (*s <= 109)
				count += _writechar(*s + 13);
			else
				count += _writechar(*s - 13);
		}
		else
		{
			count += _writechar(*s);
		}
		s++;
	}
	return (count);
}
