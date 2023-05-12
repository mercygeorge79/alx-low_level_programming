#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints name of a program
  * @argc: number of the argument
  * @argv: array
  * Return: 0.
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
