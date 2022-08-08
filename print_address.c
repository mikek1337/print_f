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
	 unsigned long int p;
	 int count = 0;
	p = va_arg(l, unsigned long int);
	s = convert(p, 16, 1);
	count += writechars("0x");
	count += writechars(s);
	return (count);
}
