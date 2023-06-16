#include <stdio.h>

/**
 * main - print_comb4.c
 *
 * Description: prints all possible different combinations of three digits.
 * Return: The program should return 0.
*/
int main(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x <= 7)
	{
		y = 1;
		while (y <= 8)
		{
			z = 2;
			while (z <= 9)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);
				if (x < 7 || y < 8 || z < 9)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
