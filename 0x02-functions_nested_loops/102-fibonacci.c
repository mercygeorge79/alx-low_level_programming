#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers without hardcode.
  *
  * Return: Always 0 success
 */
int main(void)
{
	unsigned long int p;
	unsigned long int str = 1;
	unsigned long int end = 2;
	unsigned long int l = 1000000000;
	unsigned long int str1;
	unsigned long int str2;
	unsigned long int end1;
	unsigned long int end2;

	printf("%lu", str);

	for (p = 1; p < 91; p++)
	{
		printf(", %lu", end);
		end += str;
		str = end - str;
	}

	str1 = (str / l);
	str2 = (str % l);
	end1 = (end / l);
	end2 = (end % l);

	for (p = 92; p < 99; ++p)
	{
		printf(", %lu", end1 + (end2 / l));
		printf("%lu", end2 % l);
		end1 = end1 + str1;
		str1 = end1 - str1;
		end2 = end2 + str2;
		str2 = end2 - str2;
	}
	printf("\n");
	return (0);

}
