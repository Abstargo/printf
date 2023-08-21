#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_num(va_list lkm, int cnt);
int print_str(va_list lkm, int cnt);
int print_char(va_list lkm, int cnt);

#endif
