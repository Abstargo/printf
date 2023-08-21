#include "main.h"

/**
 * _printf - printf
 * @format: format str
 *
 * Return: number of bytes
 */
int print_char(va_list lkm, int cnt)
{
	char c;
	c = va_arg(lkm, int);
	_putchar(c);
	cnt++;
	return (cnt);
}
