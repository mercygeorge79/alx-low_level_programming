#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point for my code
  *Description: 'print whether a number is positive or negative'
  *Return: always 0 is successful
  */

int main(void)
{
	int p;

	int n;

	srand(time(0));
	p = rand() - RAND_MAX / 2;
	n = rand() - RAND_MAX / 2;

	if (p > 0)
	if (n > 0)
	{
		printf("%d is positive\n", p);
		printf("%d is positive\n", n);
	}
	else if (p == 0)
	else if (n == 0)
	{
		printf("%d is zero\n", p);
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", p);
		printf("%d is negative\n", n);
	}
	return (0);
}
