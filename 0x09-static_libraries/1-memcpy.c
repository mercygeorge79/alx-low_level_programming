#include "main.h"

/**
  * _memcpy - a function that copies memory area
  * @dest: memory destination
  * @src: memory source
  * @n: number of bytes
  * Return: copied memory with n bytes changed.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int q = n;

	for (; p < q; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
