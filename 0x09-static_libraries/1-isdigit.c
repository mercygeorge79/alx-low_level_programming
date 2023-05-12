#include "main.h"

/**
  * _isdigit - Checks for a digit, 0 through 9
  * @c: ASCII code character
  * Return: 1 for digit, 0 for anything else
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
