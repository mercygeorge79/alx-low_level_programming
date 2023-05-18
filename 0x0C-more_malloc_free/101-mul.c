#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _digit - checks if a string contains a non-digit char
 * @s: string to evaluate
 * Return: 0 for non-digit, 1 otherwise.
 */
int _digit(char *s)
{
	int p = 0;

	while (s[p])
	{
		if (s[p] < '0' || s[p] > '9')
			return (0);
		p++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0 Success.
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, length, p, tk, d1, d2, *result, q = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_digit(s1) || !_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	length = l1 + l2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (p = 0; p <= l1 + l2; p++)
		result[p] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		tk = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			tk += result[l1 + l2 + 1] + (d1 * d2);
			result[l1 + l2 + 1] = tk % 10;
			tk /= 10;
		}
		if (tk > 0)
			result[l1 + l2 + 1] += tk;
	}
	for (p = 0; p < length - 1; p++)
	{
		if (result[p])
			q = 1;
		if (q)
			_putchar(result[p] + '0');
	}
	if (!q)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
