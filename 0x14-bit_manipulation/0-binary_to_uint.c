#include "main.h"

/**
 * binary_int -converts binary numbers to a decimal
 * @b - pointing to a string of 0 and 1
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			dec = (dec << 1) | 1;
		else if (*b == '0')
			dec <<= 1;
		else
			return (0);
		b++;
	}

	return (dec);
}
