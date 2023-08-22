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
	if (string == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		cnt += 6;
		return(cnt);
	}
	for (cj = 0; string[cj] != '\0'; cj++)
	{
		if (string[cj] == '\0')
			break;

		_putchar(string[cj]);
		cnt++;
	}
	return (cnt);
}
