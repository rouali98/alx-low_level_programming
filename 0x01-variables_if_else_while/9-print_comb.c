#include <stdio.h>

/**
 * main - print_comb
 *
 * Description: prints all possible combinations of single-digit numbers.
 * Return: The program should return 0.
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i++);
		if (i <= 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
