#include <stdio.h>
/**
 * main - print_alphabet
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: The program should return 0.
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
		putchar(i++);
	putchar('\n');
	return (0);
}
