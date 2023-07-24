#include <unistd.h>
#include "main.h"

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
                write(1, str, 1);
                count++;
                str++;
        }

        return count;
}

