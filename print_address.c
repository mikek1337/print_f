#include <stdarg.h>
#include "main.h"
/**
 * print_address - prints the address provided
 * @l: variable list
 * Return: number of characters
 */
int print_address(va_list l)
{
	 char *s;
	 unsigned long int a = va_arg(l, unsigned long int);
	 int count = 0;
	if (!a)
		return (writechars("(nil)"));
	s = convert(a, 16, 0);
	count += writechars("0x");
	count += writechars(s);
	return (count);
}
