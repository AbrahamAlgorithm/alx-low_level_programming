#include "main.h"
/**
 * swap_int - it swaps two integer
 * @a: the penultimate integer to swap
 * @b: the ultimate integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
