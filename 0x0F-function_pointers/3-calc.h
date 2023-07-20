#ifndef _3_CALC_H_
# define _3_CALC_H_

/* Created BY ROUALI */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 * @op: The operator to be examined
 * @f: Pointer to the function corresponding to the operator
 *
 * Description: This structure represents an operator and its associated
 *              arithmetic operation function.
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
