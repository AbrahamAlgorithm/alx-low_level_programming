#include "main.h"

/**
 * binary_uint - converts binary numbers to a decimal
 * @b: pointing to a string of 0 and 1
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int digit = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		digit = 2 * digit + (b[i] - '0');
	}
return (digit);
}
