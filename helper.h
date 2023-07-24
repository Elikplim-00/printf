#ifndef HELPER_H
#define HELPER_H

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list args);
int get_precision(const char *format, int *i, va_list args);
int get_size(const char *format, int *i);
int handle_print(const char *format, int *i, va_list args,
                 char buffer[], int flags, int width,
                 int precision, int size);

#endif /* HELPER_H */

