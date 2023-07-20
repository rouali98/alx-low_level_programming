#include <stddef.h>
#include "3-calc.h"

/* Created BY ROUALI */

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int	i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
