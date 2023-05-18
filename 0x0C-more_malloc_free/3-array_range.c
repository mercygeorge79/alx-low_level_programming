#include "main.h"
#include <stdlib.h>

/**
  * *array_range - creates an array of integers
  * @min: minimum value ranges
  * @max: maximum value ranges
  * Return: Pointer to new array.
  */
int *array_range(int min, int max)
{
	int *q;
	int p, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	q = malloc(sizeof(int) * s);

	if (q == NULL)
		return (NULL);

	for (p = 0; min <= max; p++)
		q[p] = min++;

	return (q);
}
