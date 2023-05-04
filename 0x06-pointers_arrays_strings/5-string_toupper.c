#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string
  * to uppercase
  * @s: string input
  * Return: Pointer to dest.
  */
char *string_toupper(char *s)
{
	int p = 0;

	while (*(s + p) != '\0')
	{
		if ((*(s + p) >= 97) && (*(s + p) <= 122))
			*(s + p) = *(s + p) - 32;
		p++;
	}
	return (s);
}
