#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - allocates memory using malloc
  * @b: bytes to allocate
  * Return: Pointer to memory allocated.
  */
void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);

	if (q == NULL)
		exit(98);

	return (q);
}
