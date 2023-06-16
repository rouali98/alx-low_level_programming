#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - positive_or_negative.c
 *
 * Description: print the variable n is positive or negative.
 * Return: the program should return 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is Negative\n", n);
	else if (n > 0)
		printf("%d is Positive\n", n);
	else
		prinf("%d is Zero\n", n)
	return (0);
}
