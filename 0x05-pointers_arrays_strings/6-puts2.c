#include "main.h"

/**
  * puts2 - prints characters of a string, starting with the first
  * @str: string
  * Return: Print.
  */
void puts2(char *str)
{
	int star = 0;
	int p = 0;
	char *a = str;
	int q;

	while (*a != '\0')
	{
		a++;
		star++;
	}
	p = star - 1;
	for (q = 0; q <= p; q++)
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
	}
	_putchar('\n');
}
