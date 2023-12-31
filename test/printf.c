#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_format - prints a string
 * @specifier: char to check
 * @ap: va_list
 * Return: number of characters printed
 */
int print_format(char specifier, va_list ap)
{
	int count = 0; /* number of characters printed */

	switch (specifier)
	{
	case 'c':
		count += _putchar(va_arg(ap, int)); /* to print char */
		break;
	case 's':
		count += print_string(va_arg(ap, char *)); /* to print string */
		break;
	case '%':
		count += _putchar('%'); /* to print % */
		break;
	case 'd':
	case 'i':
		count += print_integer(va_arg(ap, int)); /* to print integer */
		break;
	case '\n':
		return (0);
	default:
		count += _putchar('%');
		count += _putchar(specifier);
		break;
	}
	return (count);
}

/**
 * _printf - Just like printf
 * @format: string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += print_format(format[i + 1], ap);
			i++;
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (count);
}
