#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates the array
 * @size: the number of the array you want to create
 * @c: the integer in the array
 * Return : NULL if size = 0
 * Return : *array or NULL
 */
char *create_array(unsigned int size, char c);
{
	unsigned int i = 0;
	char *p = malloc(size * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
