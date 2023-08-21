#include "main.h"
/**
 * _printf - printf
 * @format: format str
 *
 * Return: number of bytes
 */
int print_str(va_list lkm, int cnt)
{
	int cj;
	char *string = va_arg(lkm, char *);
	for (cj = 0; string[cj] != '\0'; cj++)
	{
		if (string[cj] == 0)
			break;

		_putchar(string[cj]);
		cnt++;
	}
	return (cnt);
}
