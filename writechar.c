#include <unistd.h>
#include "main.h"
/**
 * _writechar - standard output character
 *
 * Return: 1 on success.
 * On error, -1 .
 */
int _writechar(char c)
{
	 return (write(1, &c, 1));
	
}
