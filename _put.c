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
