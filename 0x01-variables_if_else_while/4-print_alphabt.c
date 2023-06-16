#include <stdio.h>

/**
 * main - print_alphabt
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: The program should return 0.
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
			i++;
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
