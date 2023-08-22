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
	int id, cnt = 0;
	va_list lkm;

	va_start(lkm, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (id = 0; format[id] != '\0'; id++)
	{
		if (format[id] == '\0')
			break;
		if (format[id] == '%')
		{
			if (format[id + 1] == '%')
			{
				_putchar('%');
				cnt++;
			}
			else if (format[id + 1] == 'd' || format[id + 1] == 'i')
			{
				cnt = print_num(lkm, cnt);
			}
			else if (format[id + 1] == 'c')
			{
				cnt = print_char(lkm, cnt);
			}
			else if (format[id + 1] == 's')
			{
				cnt = print_str(lkm, cnt);
			}
			else if (format[id + 1] == 'r')
			{
                		cnt = str_rev(lkm, cnt);
			}

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
