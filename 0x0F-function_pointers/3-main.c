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

int main(int argc, char **argv)
{
	int a, b;
	char *op;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	if (op[1])
	{
		printf("Error\n");
		exit(99);
	}
	b = atoi(argv[3]);
	operation = get_op_func(op);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(a, b));
	return (0);
}
