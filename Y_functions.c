#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/* max function per file only 5 */
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
		count += _putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		count += print_integer(n / 10);
	}
	count += _putchar((n % 10) + '0');
	return (count);
}
