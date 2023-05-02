#include "main.h"

/**
  * puts_half - prints half of a string
  * for odd characters - print last n = (length_of_the_string - 1) / 2
  * @str: string
  * Return: Half of the input.
  */
void puts_half(char *str)
{
	int p, n, length;

	length = 0;

	for (p = 0; str[p] != '\0'; p++)
	length++;

	n = (length / 2);

	if ((length % 2) == 1)
	n = ((length + 1) / 2);

	for (p = n; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');
}
