#include "main.h"
#include <stdlib.h>

/**
  * *_realloc - reallocates a memory block
  * @ptr: pointer to previous memory
  * @old_size: size of memory allocated for ptr
  * @new_size: size of new memory block
  * Return: Pointer to new memory block.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *op;
	unsigned int p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	op = ptr;

	if (new_size < old_size)
	{
		for (p = 0; p < new_size; p++)
			p1[p] = op[p];
	}

	if (new_size > old_size)
	{
		for (p = 0; p < old_size; p++)
			p1[p] = op[p];
	}

	free(ptr);
	return (p1);
}
