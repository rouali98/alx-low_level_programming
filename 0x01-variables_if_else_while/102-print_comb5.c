#include <stdio.h>

/**
 * main - print_comb5.c
 *
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: The program should return 0.
*/
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i <= 98 || j <= 99)
				putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
