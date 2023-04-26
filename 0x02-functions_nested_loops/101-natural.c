#include <stdio.h>

/**
  * main - Computes and prints the sum of
  * multiples of 3 or 5 below 1024 (excluded).
  *
  * Return: Always 0 is success.
  */
int main(void)
{
	int p, sum = 0;

	for (p = 0; p < 1024; p++)
	{
		if ((p % 3) == 0 || (p % 5) == 0)
			sum += p;
	}

	printf("%d\n", sum);
	return (0);
}
