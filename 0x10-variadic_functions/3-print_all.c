#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - prints anything
  * @format: list of the different arguments passed
  */
void print_all(const char * const format, ...)
{
	int p = 0;
	char *s, *sp = "";

	va_list stuff;

	va_start(stuff, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", sp, va_arg(stuff, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(stuff, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(stuff, double));
					break;
				case 's':
					s = va_arg(stuff, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sp, s);
					break;
				default:
					p++;
					continue;
			}
			sp = ", ";
			p++;
		}
	}
	printf("\n");
	va_end(stuff);
}
