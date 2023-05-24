#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array
  * @array: array
  * @size: number of elements
  * @action: pointer to be printed
  * Return: Void.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		return;

	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
