#include "main.h"
/**
 * main - main entry point
 *
 * Return : 0
 */
int main(void)
{
	char printput[8] = "_putchar";
	int step;

	for (step = 0; step < 8; step++)
	{
		_putchar(printput[step]);
	}
	_putchar("\n");
	return (0);
}
