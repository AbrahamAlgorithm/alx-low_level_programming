#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int d)
{
	int m = d % 10;

	if (m < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
