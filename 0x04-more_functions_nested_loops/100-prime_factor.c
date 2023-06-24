#include "main.h"
#include <math.h>

/**
 * main - a function print prime factor
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int i;
	long int max;
	long int nbr;

	nbr = 612852475143;
	max = -1;

	while (nbr % 2 == 0)
	{
		max = 2;
		nbr /= 2;
	}

	for (i = 3; i <= sqrt(nbr); i = i + 2)
	{
		while (nbr % i == 0)
		{
			max = i;
			nbr = nbr / i;
		}
	}

	if (nbr > 2)
		max = nbr;

	printf("%ld\n", max);

	return (0);
}
