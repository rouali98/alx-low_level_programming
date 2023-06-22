#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints a string'
 * Return: Program should return 0.
 */

int main(void)
{
	int i = 0;
	char *str = "_putchar\n";

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
