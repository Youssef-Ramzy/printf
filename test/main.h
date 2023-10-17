#ifndef MIAN_H
#define MIAN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _len(char *s);
int print_string(char *s);
int print_integer(int n);
int print_format(char specifier, va_list ap);
int _printf(const char *format, ...);

#endif /*MAIN_H*/
