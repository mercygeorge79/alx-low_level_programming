#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the number of arguments passed
  * @argc: number of the arguments
  * @argv: array
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int p;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (p = 0; *argv; p++)
			argv++;
		printf("%d\n", p - 1);
	}
	return (0);
}
