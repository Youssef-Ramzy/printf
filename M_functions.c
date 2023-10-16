#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/* max function per file only 5 */
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _len - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
