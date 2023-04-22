#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Description: 'print numbers'
 *Return: always 0 good
 */
int main(void)
{
	int p, e;

	for (p = '0'; p < '9'; p++)
	{

	for (e = p + 1; e <= '9'; e++)
	{
	if (e != p)
	{
	putchar(p);
	putchar(e);
	if (p == '8' && e == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
