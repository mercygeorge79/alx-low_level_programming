#include <stdio.h>

/**
  * main - prints all arguments passed
  * @argc: number of the argument
  * @argv: array
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
