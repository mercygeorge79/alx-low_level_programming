#include <stdio.h>

/**
  * main - Find and print the sum of the even-valued terms
  * followed by a new line.
  *
  * Return: always 0 success
  */
int main(void)
{
	int p;
	unsigned long int q, r, next, sum;

	q = 1;
	r = 2;
	sum = 0;

	for (p = 1; p <= 33; ++p)
	{
		if (q < 4000000 && (q % 2) == 0)
		{
			sum = sum + q;
		}
		next = q + r;
		q = r;
		r = next;
	}
	printf("%lu\n", sum);
	return (0);
}
