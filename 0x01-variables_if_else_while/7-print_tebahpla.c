#include <stdio.h>
/**
 * main - main entry point
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
