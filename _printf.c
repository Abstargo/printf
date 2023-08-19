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
	int i, j, k, integer, temp, count = 0;
	va_list list;
	char c, *str, array[12];

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\0')
			break;
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			c = va_arg(list, int);
			_putchar(c);
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			integer = va_arg(list, int);
			if (integer == 0)
			{
				_putchar(48);
				count++;
			}
			k = 0;
			while (integer != 0)
			{
				if (integer < 0)
				{
					_putchar('-');
					integer = -integer;
					count++;
				}
				else
				{
					temp = integer % 10;
					integer /= 10;
					array[k] = temp + 48;
					count++;
					k++;
				}
			}
			for (; k >= 1; k--)
			{
				_putchar(array[k - 1]);
			}
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			str = va_arg(list, char *);
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] == '\0')
					break;
				_putchar(str[j]);
				count++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(list);

	return (count);
}
