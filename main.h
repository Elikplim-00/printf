#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * _print_char - Prints a character to stdout.
 * @c: The character to print.
 *
 * Return: The number of characters printed (1).
 */
int _print_char(char c);

/**
 * _print_str - Prints a string to stdout.
 * @str: The string to print.
 *
 * Return: The number of characters printed (excluding null byte).
 */
int _print_str(char *str);

/**
 * _printf - Prints formatted output to stdout.
 * @format: The format string containing directives.
 *
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...);

#endif /* MAIN_H */

