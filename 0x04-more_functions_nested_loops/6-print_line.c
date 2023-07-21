#include "main.h"
#include <stdio.h>

/**
 * main - a function that draws a straight line in the terminal
 * Return : 0
 */

void print_line(int n);
{
	 if (n <= 0) 
	 {
		 _putchar('\n');
	 }
	 else 
	 {
		 for (int i = 0; i < n; i++) 
		 {
			 _putchar('_');
		 }
	         _putchar('\n');
	 }
}

int main(void) {
    int n = 5;
    print_line(n);

    n = 0;
    print_line(n);

    n = -3;
    print_line(n);

    return 0;
}
