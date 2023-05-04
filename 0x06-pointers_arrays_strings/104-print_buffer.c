#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: buffer size
 * Return: None.
 */
void print_buffer(char *b, int size)
{
	int p, q, r;

	if (size <= 0)
		printf("\n");
	else
	{
		for (p = 0; p < size; p += 10)
		{
			printf("%.8x:", p);
			for (q = p; q < p + 10; q++)
			{
				if (q % 2 == 0)
					printf(" ");
				if (q < size)
					printf("%.2x", *(b + q));
				else
					printf("  ");
			}
			printf(" ");
			for (r = p; r < p + 10; r++)
			{
				if (r >= size)
					break;
				if (*(b + r) < 32 || *(b + r) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + r));
			}
			printf("\n");
		}
	}
}
