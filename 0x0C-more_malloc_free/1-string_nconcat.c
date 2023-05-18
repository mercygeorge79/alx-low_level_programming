#include "main.h"
#include <stdlib.h>

/**
  * *string_nconcat - cat two strings
  * @s1: string to be appended
  * @s2: string to cat from
  * @n: byte to cat
  * Return: Pointer to string result
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *q;
	unsigned int p = 0, r = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		q = malloc(sizeof(char) * (len1 + n + 1));
	else
		q = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!q)
		return (NULL);

	while (p < len1)
	{
		q[p] = s1[p];
		p++;
	}

	while (n < len2 && p < (len1 + n))
		q[p++] = s2[r++];

	while (n >= len2 && p < (len1 + len2))
		q[p++] = s2[r++];

	q[p] = '\0';

	return (q);
}
