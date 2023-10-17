#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * print_integer - prints an integer
 * @n: integer to print
 * Return: number of characters printed
 */
int print_integer(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n / 10)
	{
		count += print_integer(n / 10);
	}
	_putchar((n % 10) + '0');
	count++;
	return (count);
}
