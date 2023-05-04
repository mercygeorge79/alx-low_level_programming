#include "main.h"
#include <stdio.h>

/**
  * infinite_add - adds two numbers
  * @n1: first number
  * @n2: second number
  * @r: buffer the function will use to store the result
  * @size_r: buffer size
  * Return: Pointer to dest.
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int p1 = 0, p2 = 0, qp, st, pnt1, pnt2, add = 0;

	while (*(n1 + p1) != '\0')
		p1++;
	while (*(n2 + p2) != '\0')
		p2++;
	if (p1 >= p2)
		st = p1;
	else
		st = p2;
	if (size_r <= st + 1)
		return (0);
	r[st + 1] = '\0';
	p1--, p2--, size_r--;
	pnt1 = *(n1 + p1) - 48, pnt2 = *(n2 + p2) - 48;
	while (st >= 0)
	{
		qp = pnt1 + pnt2 + add;
		if (qp >= 10)
			add = qp / 10;
		else
			add = 0;
		if (qp > 0)
		*(r + st) = (qp % 10) + 48;
		else
			*(r + st) = '0';
		if (p1 > 0)
			p1--, pnt1 = *(n1 + p1) - 48;
		else
			pnt1 = 0;
		if (p2 > 0)
			p2--, pnt2 = *(n2 + p2) - 48;
		else
			pnt2 = 0;
		st--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
