#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of the arguments
 * @argv: array
 * Return: Error for non-digit, 0 for integer.
 */

int main(int argc, char *argv[])
{
	int p, q, len, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (p = 1; p < argc; p++)
		{
			ptr = argv[p];
			len = strlen(ptr);

			for (q = 0; q < len; q++)
			{
				if (isdigit(*(ptr + q)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[p]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
