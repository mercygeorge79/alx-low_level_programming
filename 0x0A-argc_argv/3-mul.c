#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of the arguments
 * @argv: array
 * Return: Error if two arguments are not received.
 */

int main(int argc, char *argv[])
{
	int p, q;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		q = 1;

		for (p = 1; p < 3; p++)
		q *= atoi(argv[p]);

		printf("%d\n", q);
	}

	return (0);
}
