#include "main.h"

/**
  * _strcat - concatenates two strings
  * @src: source
  * @dest: destination
  * Return: Pointer to dest.
  */
char *_strcat(char *dest, char *src)
{
	int p = 0;
	int q = 0;

	while (*(dest + p) != '\0')
	{
		p++;
	}

	while (q >= 0)
	{
		*(dest + p) = *(src + q);
		if (*(src + q) == '\0')
			break;
		p++;
		q++;
	}
	return (dest);
}
