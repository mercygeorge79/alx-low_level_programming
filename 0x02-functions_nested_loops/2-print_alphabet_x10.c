#include "main.h"

/**
  * print_alphabet_x10 - Prints alphabets 10 times.
  */
void print_alphabet_x10(void)
{
	int p;
	int e;

	for (p = 1; p <= 10; p++)
	{
		for (e = 97; e <= 122; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
