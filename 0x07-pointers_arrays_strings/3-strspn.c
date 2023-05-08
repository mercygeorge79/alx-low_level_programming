#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to string to search
 * @accept: Pointer to string containing acceptable characters
 *
 * Return: Number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)

{
unsigned int i, j;

unsigned int len = 0;

int found;

for (i = 0; s[i] != '\0'; i++)

{
	found = 0;
for (j = 0; accept[j] != '\0'; j++)

	{

if (s[i] == accept[j])

	}

len++;
found = 1;
break;

}

}

if (found == 0)

{

	return (len);

}

}

return (len);

}
