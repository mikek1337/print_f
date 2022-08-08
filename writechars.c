#include "main.h"
#include <stdlib.h>
/**
 * writechars - prints all the string to standard output
 * @s: char pointer /string that need to be outputed
 * Return: number of characters printed
 */
int writechars(char *s)
{
	 int count = 0;
	while (*s != '\0')
	{
		_writechar(*s);
		s++;
		count++;
	}	
	return (count);
}
