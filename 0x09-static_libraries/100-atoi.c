#include "main.h"
/**
  * _atoi - converts a string to an integer
  * @s: string to be converted
  * Return: Converted integer.
  */
int _atoi(char *s)
{
	int p = 0;
	int q = 0;
	int n = 0;
	int len = 0;
	int r = 0;
	int dig = 0;

	while (s[len] != '\0')
	len++;

	while (p < len && r == 0)
	{
		if (s[p] == '-')
		++q;

		if (s[p] >= '0' && s[p] <= '9')
		{
			dig = s[p] - '0';
			if (q % 2)
				dig = -dig;
			n = n * 10 + dig;
			r = 1;

			if (s[p + 1] < '0' || s[p + 1] > '9')
				break;
			r = 0;
		}
		p++;
	}

	if (r == 0)
		return (0);

	return (n);
}
