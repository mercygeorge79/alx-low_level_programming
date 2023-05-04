#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: input value
  * @s2: input value
  * Return: s1 - s2.
  */
int _strcmp(char *s1, char *s2)
{
	int p = 0;

	while (s1[p] != '\0' && s2[p] != '\0')
	{
		if (s1[p] != s2[p])
		{
			return (s1[p] - s2[p]);
		}
		p++;
	}
	return (0);
}

