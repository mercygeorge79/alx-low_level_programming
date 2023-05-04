#include "main.h"

/**
  * print_number - prints an integer
  * @n: integer
  * Return: None.
  */
void print_number(int n)
{
	unsigned int p, q, r;

	if (n < 0)
	{
		_putchar(45);
		p = n * -1;
	}
	else
	{
		p = n;
	}

	q = p;
	r = 1;

	while (q > 9)
	{
		q /= 10;
		r *= 10;
	}

	for (; r >= 1; r /= 10)
	{
		_putchar (((p / r) % 10) + 48);
	}
}
