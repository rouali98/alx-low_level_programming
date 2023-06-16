#include <stdio.h>

/**
 * main - print_tebahpla
 *
 * Description: prints the lowercase alphabet in reverse.
 * Return: The program should return 0.
*/
int main(void)
{
	int i = 122;

	while (i >= 97)
		putchar(i--);
	putchar('\n');
	return (0);
}
