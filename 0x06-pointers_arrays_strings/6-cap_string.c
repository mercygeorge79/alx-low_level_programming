#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @s: input string
  * Return: Pointer to dest.
  */
char *cap_string(char *s)
{
	int p = 0, q;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + p) >= 97 && *(s + p) <= 122)
		*(s + p) =  *(s + p) - 32;
	p++;
	while (*(s + p) != '\0')
	{
		for (q = 0; q < 13; q++)
		{
			if (*(s + p) == sep_words[q])
			{
				if ((*(s + (p + 1)) >= 97) && (*(s + (p + 1)) <= 122))
					*(s + (p + 1)) = *(s + (p + 1)) - 32;
				break;
			}
		}
		p++;
	}
	return (s);
}
