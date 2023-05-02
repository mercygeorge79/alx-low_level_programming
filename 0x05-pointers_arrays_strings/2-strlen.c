#include "main.h"
/**
 *  _strlen - returns the length of a string
 *  b stands for No, string length
 *  @i: string
 *  Return: length
 */
int _strlen(char *i)
{
	int b = 0;

while (*i != '\0')
	{
b++;
i++;
	}
return (b);
}
