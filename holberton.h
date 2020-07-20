#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(const char c);
int _strlen(const char *s);
void _puts(const char *str);
int _numbercount(int n);
void _printdigit(int n);
int _tbinoct(unsigned int n, int m, unsigned s);
void _printstring(char *s);
void format_int(va_list list, int *printed);
void format_string(va_list list, int *printed, char sr);
void format_values(va_list list, const char *format, int *printed, int *count);
#endif
