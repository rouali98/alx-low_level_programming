#include <stddef.h>
#include "3-calc.h"

/* Created BY ROUALI */

/**
 * get_op_func - get the operator and redirect to the func.
 * @s: the operator
(* a blank line
* Description: get the operator and redirect to the func.)?
(* section header: 3-calc.h)*
* Return: return null or the function to do.
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
