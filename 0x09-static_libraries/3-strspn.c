#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: input
  * @accept: input
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			{
				p++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (p);
		}
		s++;
	}
	return (p);
}
