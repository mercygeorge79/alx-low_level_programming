#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - returns the sum of all its parameters
  * @n: number of parameters passed
  * @...: the variable no. of parameter to add
  * Return: 0 if n is 0.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list myApp;
	unsigned int p, sum = 0;

	va_start(myApp, n);

	for (p = 0; p < n; p++)
		sum += va_arg(myApp, int);

	va_end(myApp);

	return (sum);
}
