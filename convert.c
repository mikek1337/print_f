#include <stdlib.h>
/**
 * convert - converts to a specified base
 * @n: number to be converted
 * @base: the base to be converted to
 * @islowercase: to determine if the hex value is smaller of larger
 * Return: char pointer
 */
char *convert(unsigned long int n, int base, int islowercase)
{

	 char *s = malloc(sizeof(char) * 50);
	 char *rep = (islowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
	do {
		*--s = rep[n % base];
		n /= base;
	} while (n != 0);
	return (s);
}
