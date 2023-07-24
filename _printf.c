#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_char - Prints a character to stdout.
 * @c: The character to print.
 *
 * Return: The number of characters printed (1).
 */
int _print_char(char c)
{
    putchar(c);
    return 1;
}

/**
 * _print_str - Prints a string to stdout.
 * @str: The string to print.
 *
 * Return: The number of characters printed (excluding null byte).
 */
int _print_str(char *str)
{
    int count = 0;
    while (*str)
    {
        putchar(*str);
        count++;
        str++;
    }
    return count;
}

/**
 * _printf - Prints formatted output to stdout.
 * @format: The format string containing directives.
 *
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += _print_char(va_arg(args, int));
			else if (*format == 's')
				count += _print_str(va_arg(args, char *));
			else if (*format == '%')
				count += _print_char('%');
		}
		else
			count += _print_char(*format);
		format++;
	}

	va_end(args);

	return (count);
}

