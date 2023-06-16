#include <stdio.h>
/**
 * main - print_alphabets
 *
 * Description: prints the alphabet in lowercase, and then in uppercase.
 * Return: The program should return 0.
*/
int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
		putchar(i++);
	while (j <= 90)
		putchar(j++);
	putchar('\n');
	return (0);
}
