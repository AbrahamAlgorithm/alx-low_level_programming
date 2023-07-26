#include "main.h"

/**
 * strlen - returns lenght of string
 *
 * Return : lenght of the string
 */
int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}
