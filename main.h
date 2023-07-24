#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* Macros */
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* Flags */
#define F_MINUS 1   /* Minus Flag: Left-justify the output */
#define F_PLUS 2    /* Plus Flag: Prefix positive numbers with a plus sign */
#define F_ZERO 4    /* Zero Flag: Pad numeric output with leading zeros */
#define F_HASH 8    /* Hash Flag: Use an alternate form for conversions */
#define F_SPACE 16  /* Space Flag: Prefix positive numbers with a space */

/* Sizes */
#define S_LONG 2    /* Long Size: Indicate that the data type is long */
#define S_SHORT 1   /* Short Size: Indicate that the data type is short */

/* Function prototypes */

/* Custom printf function */
int _printf(const char *format, ...);

/* Functions to print characters and strings */
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
/* Other number printing functions... */

/* Function to print non-printable characters */
int print_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Function to print memory address */
int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Functions to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/* Utility functions */
/* ... */

#endif /* MAIN_H */

