#include "main.h"
#include <stdio.h>

/**
 * main - function that print number 0 - 9
 *
 * Return : void
 */

void print_most_numbers(void);
{
	int let;

	for (let = 48; let < 58; let++)
	{
        	if (let = = 50 || let == 52)
		{
			continue;
		}
		putchar(let);
	}
	putchar('\n');
}
