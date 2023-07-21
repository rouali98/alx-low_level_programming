#include <stdio.h>

/* Created BY ROUALI */

/**
 * main - Prints the name of the file it was compiled from.
 *
 * Return: Always 0.
*/

int main(void)
{
	char *file_name;

    file_name = __FILE__;
	printf("%s\n", file_name);
	return (0);
}
