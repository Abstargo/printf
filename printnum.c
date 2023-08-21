#include "main.h"

/**
 * print_num - printf
 * @cnt: counter
 *
 * Return: number of bytes
 */
int print_num(va_list lkm, int cnt)
{
	int raw = va_arg(lkm, int);
	int temp_var = raw;
	int div;
	int number;

	if (raw < 0)
	{
		_putchar('-');
		cnt++;
		temp_var = -temp_var;
	}

	div = 1;

	while (temp_var / div > 0)
	{
		div *= 10;
	}

	div /= 10;

	while (div != 0)
	{
		number = temp_var / div;
		_putchar(number + '0');
		cnt++;
		temp_var %= div;
		div /= 10;
	}
	return (cnt);
}
