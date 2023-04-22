#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'print possible different combinations of three digits'
  *Return: always 0 is good
  */
int main(void)
{
	int e, a, w;

	for (e = '0'; e < '9'; e++)
	{

	for (a = e + 1; a <= '9'; a++)
	{

	for (w = a + 1; w <= '9'; w++)
	{
	if ((a != e) != w)
	{
	putchar(e);
	putchar(a);
	putchar(w);
	if (e == '7' && a == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
