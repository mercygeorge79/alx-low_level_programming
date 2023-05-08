#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by s with the constant byte c.
 * @s: Pointer to the memory area to be filled.
 * @c: The byte to fill the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;

	while (n-- > 0)
		*p++ = (unsigned char)c;
	return (s);
}

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src: Pointer to the source of data to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination array.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;

const unsigned char *s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
