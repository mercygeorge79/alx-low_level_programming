#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers
  * @separator: string to be printed
  * @n: number of integers passed
  * @...: various numbers to be printed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int p;

	va_start(numbers, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(numbers, int));

		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
