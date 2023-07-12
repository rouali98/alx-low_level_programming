#include <stdio.h>
#include <unistd.h>

/* By ROUALI */

/**
 * main - The Function
 * @c:  The variable
 * @v: THe variable
 * Return: The Return value/void
 */

int main(int c, char **v)
{
	if (c >= 1)
	{
		while (*v)
		{
			printf("%s\n", *v);
			v++;
		}
	}
	return (0);
}
