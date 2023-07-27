#include "main.h"

/**
 * main - a function that concatenate two strings
 * appends src to dest
 * return : *dest
 */
char *_strcat(char *dest, char *src);
{
	char *dest_ptr = dest;
	while (*dest_ptr != '\0')
		dest_ptr++;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
       
	return dest;
}
