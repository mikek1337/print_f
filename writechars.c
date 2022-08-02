/**
 * writechars - prints all the string to standard output
 * *s: char pointer /string that need to be outputed
 * Return: void
 */
void writechars(char *s)
{
	while(*s != '\0')
	{
		_writechar(*s);
		s++;
	}
}
