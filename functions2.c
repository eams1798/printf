#include "holberton.h"

/**
 * print_unumber - prints a positive number
 * @n: number to print
 *
 * Return: void
 */

void print_unumber(unsigned int n)
{
	unsigned int num;

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}

/**
 * nudigits - returns the number of digits of unsigned n
 * @n: number
 *
 * Return: dg
 */

int nudigits(unsigned int n)
{
	int dg = 1;

	while (n / 10 > 0)
	{
		n /= 10;
		dg++;
	}
	return (dg);
}
