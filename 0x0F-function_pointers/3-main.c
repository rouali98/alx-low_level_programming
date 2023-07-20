#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success) or an error code (98, 99, 100)
*/

int	main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
