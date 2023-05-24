#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - adds two numbers
  * @a: first number
  * @b: second number
  * Return: Sum of a and b.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two numbers
  * @a: first number
  * @b: second number
  * Return: Difference of a and b.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiples two numbers
  * @a: first number
  * @b: second number
  * Return: Product of a and b.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two numbers
  * @a: first number
  * @b: second number
  * Return: Quotient of a and b.
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - divides numerator by denominator to find result
  * @a: numerator
  * @b: denominator
  * Return: Remainder of the division of a by b.
  */
int op_mod(int a, int b)
{
	return (a % b);
}
