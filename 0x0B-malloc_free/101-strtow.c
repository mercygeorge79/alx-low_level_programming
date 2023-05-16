#include "main.h"
#include <stdlib.h>

/**
  * word_poll - to count no. of words in a string
  * @s: string
  * Return: Number of words.
  */
int word_poll(char *s)
{
	int mark, p, q;

	mark = 0;
	q = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			mark = 0;
		else if (mark == 0)
		{
			mark = 1;
			q++;
		}
	}
	return (q);
}

/**
  * **strtow - splits a string into words
  * @str: string
  * Return: Pointer to array of strings for succss, NULL for error
  */
char **strtow(char *str)
{
	char **class, *act;
	int r, s = 0, length = 0, wrds, t = 0, beg, end;

	while (*(str + length))
		length++;
	wrds = word_poll(str);
	if (wrds == 0)
		return (NULL);

	class = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (class == NULL)
		return (NULL);

	for (r = 0; r <= length; r++)
	{
		if (str[r] == ' ' || str[r] == '\0')
		{
			if (t)
			{
				end = r;
				act = (char *) malloc(sizeof(char) * (t + 1));
				if (act == NULL)
					return (NULL);
				while (beg < end)
					*act++ = str[beg++];
				*act = '\0';
				class[s] = act - t;
				s++;
				t = 0;
			}
		}
		else if (t++ == 0)
			beg = r;
	}
	class[s] = NULL;
	return (class);
}
