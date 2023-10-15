#include "main.h"

/**
* _puts - print a string with newline
* @str: the string to print
* Return: void
*/
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
* _putchar - writes the character c stdout
* @c: the character to print
* Return: on success 1.
* on error, -1 is returned, and errno is set appropriately.
*/
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
