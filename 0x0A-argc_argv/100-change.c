#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints minimum number of coins to make change for money
  * @argc: number of the argument
  * @argv: array
  * Return: 1 for Error, 0 for success.
  */
int main(int argc, char *argv[])
{
	int p, q, outcome;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	outcome = 0;

	if (p < 0)
	{
		printf("0\n");
		return (0);
	}

	for (q = 0; q < 5 && p >= 0; q++)
	{
		while (p >= coins[q])
		{
			outcome++;
			p -= coins[q];
		}
	}
	printf("%d\n", outcome);

	return (0);
}
