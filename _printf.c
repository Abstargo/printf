#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf implementation
 * @format: format string
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int id, cj, cnt = 0;
	va_list lkm;
	char c, *string;

	va_start(lkm, format);

	if (format == NULL || format[0] == '%' && format[1] == '\0')
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);

	for (id = 0; format[id] != '\0'; id++)
	{
		if (format[id] == '\0')
			break;

		if (format[id] == '%' && format[id + 1] == 'c')
		{
			c = va_arg(lkm, int);
			_putchar(c);
			cnt++;
			id++;
		}
		else if (format[id] == '%' && format[id + 1] == '%')
		{
			_putchar('%');
			cnt++;
			id++;
		}
		else
		{
			_putchar(format[id]);
			cnt++;
		}
	}

	va_end(lkm);

	return (cnt);
}
