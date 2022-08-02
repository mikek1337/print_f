/**
 * convert - converts to a specified base
 * @n: number to be converted
 * @base: the base to be converted to
 * Return: char pointer
 */
char *convert(int n, int base)
{

	char *s = malloc(sizeof(char)*50);
	char *rep = {"0123456789ABCDEF"};
	do
	{
		*--s = rep[n%base];
		n /= base;
	}while (n != 0);
	return (s);
}
