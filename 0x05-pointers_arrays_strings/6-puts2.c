#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character
 * followed by a new line.
 *@str: Input
*Return: print
*/
void puts2(char *str)
{
	int z = 0;
	int t = 0;
	char *s = str;
	int k;

	while (*s != '\0')
	{
		s++;
		z++;
	}
	t = z - 1;
	for (k = 0; k <= t ; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
