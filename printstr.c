#include "main.h"

/**
 * print_str - A Custom function that print a string
 * @lkm: is A va_list which is contain an argument
 * as a string.
 * @cnt: It count the number of characters that's been
 * printed.
 *
 * Return: counter value.
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
