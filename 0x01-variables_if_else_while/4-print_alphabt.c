#include <stdio.h>
/**
 * main - main entry point
 * Return: 0
 */
int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		if (let != 'q' && let != 'e')
		{
			putchar(let);
		}
		let++;
	}
	putchar('\n');
	return (0);
}
