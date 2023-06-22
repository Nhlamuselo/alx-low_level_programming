#include "main.h"

/**
 * print_numbers - print numbers from0 to 9
 * Returrn:Always 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
