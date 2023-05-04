#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @s: input string
  * Return: Pointer to dest
  */
char *rot13(char *s)
{
	int p;
	int q;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (q = 0; x[q] != '\0'; q++)
		{
			if (s[p] == x[q])
			{
				s[p] = y[q];
				break;
			}
		}
	}
	return (s);
}
