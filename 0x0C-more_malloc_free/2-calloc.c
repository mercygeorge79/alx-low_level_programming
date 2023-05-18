#include "main.h"
#include <stdlib.h>

/**
  * *_memset - fills memory with a constant byte
  * @s: memory area to fill
  * @c: char to copy
  * @n: no. of times to copy
  * Return: Pointer to memory area.
  */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = c;
	}

	return (s);
}

/**
  * *_calloc - allocates memory for an array
  * @nmemb: no. of elements in the array
  * @size: size of the elements
  * Return: Pointer to memory allocated.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;

	if (nmemb == 0 || size == 0)
		return (NULL);

	q = malloc(size * nmemb);

	if (q == NULL)
		return (NULL);

	_memset(q, 0, nmemb * size);

	return (q);
}
