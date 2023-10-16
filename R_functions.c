#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
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
