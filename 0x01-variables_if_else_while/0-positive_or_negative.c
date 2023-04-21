#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a random number
 * main - determine if a number is positive, negative o zero
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n < 0)
		printf("%d is negative\n", n);
	{
		printf("%d is %s\n", n, "positive");
	}
	else
		print f("%d is zero\n", n);
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
