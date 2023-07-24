#include <unistd.h>
#include "main.h"

/**
 * _print_char - Prints a character to stdout.
 * @c: The character to print.
 *
 * Return: The number of characters printed (1).
 */
int _print_char(char c)
{
        return write(1, &c, 1);
}

