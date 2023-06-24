#include "main.h"

/**
 *print_number - print a number
 *@n: the number to be printed
 *Return: nothing
*/

void print_number(int n)
{
	unsigned int nbr;

	if (n < 0)
	{
		_putchar('-');
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		print_number(nbr / 10);
		print_number(nbr % 10);
	}
	else
		_putchar(nbr + '0');
}
