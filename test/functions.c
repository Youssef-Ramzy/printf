#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/* max function per file only 5 */
/**
 * print_string - prints a string
 * @s: string to print
 * Return: number of characters printed
*/
int print_string(char *s)
{
	int i;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
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
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
