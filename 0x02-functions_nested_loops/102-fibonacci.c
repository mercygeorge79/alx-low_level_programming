#include <stdio.h>

/**
  * main - Prints the first 50 Fibronacci numbers,
  * starting with 1 and 2 followed by a new line.
  *
  * Return: Always 0 success.
  */
int main(void)
{
	int p;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (p = 0; p < 50; p++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (p == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
