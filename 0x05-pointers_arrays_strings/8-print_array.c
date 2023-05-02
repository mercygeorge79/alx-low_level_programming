#include "main.h"

/**
  * print_array - prints n elements of an array of integers
  * @a: array name
  * @n: number of elements of the array to be printed
  * Return: Inputs a and n.
  */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d, ", a[p]);
	}
	if (p == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
