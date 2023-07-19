#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	(*op_func)(int, int);
	int	result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
		return (printf("Error\n"), 99);
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
		return (printf("Error\n"), 100);
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
