#include <stdio.h>
#include <unistd.h>

/* By ROUALI */

/**
 * main - The Function
 * @c:  The variable
 * @v: The Variable
 * Return: The Return value/void
 */

int main(int c, char **v)
{
	if (c > 0)
		printf("%s\n", *v);
	return (0);
}
