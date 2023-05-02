#include "main.h"

/**
  * char *_strcpy - copies the string including the terminating null
  * byte (\0), to a buffer
  *
  * @dest: buffer copied to
  * @src: copy from
  * Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int q = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for (; q < p; q++)
	{
		dest[q] = src[q];
	}
	dest[p] = '\0';
	return (dest);
}

