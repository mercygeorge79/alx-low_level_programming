#include "main.h"

/**
  * _islower - Shows 1 for lowercase input. Otherwise shows 0
  *
  * @c: ASCII code character
  *
  * Return: 1 for lowercase. 0 for others.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
