#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory starting address
 * @b: value
 * @n: number of bytes to be changed
 * Return: Changed array with value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
