#include <stdio.h>

/**
 * main - print_base16
 * Description: prints all the numbers of base 16 in lowercase.
 * Return: The program should return 0.
*/
int main(void)
{
	int i = 48;
	int j = 97;

	while(i <= 57)
		putchar(i++);
	while(j <= 102)
		putchar(j++);
	putchar('\n');
	return (0);
}
