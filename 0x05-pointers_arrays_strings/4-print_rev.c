#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int k;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (k = len; k > 0; k--)
	{
		_putchar (*s);
		s--;
	}
	_putchar ('\n');
}
