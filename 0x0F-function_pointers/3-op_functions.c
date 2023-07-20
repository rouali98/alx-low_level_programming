#include "3-calc.h"

/* Created BY ROUALI */

/**
 *op_add - adds two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/* Created BY ROUALI */

/**
 *op_sub - subtracts two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the result of a minus b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/* Created BY ROUALI */

/**
 *op_mul - multiplies two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the result of a multiplied by b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/* Created BY ROUALI */

/**
 *op_div - divides two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the result of a divided by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/* Created BY ROUALI */

/**
 *op_mod - calculats the modulus of two numbers
 *@a: the first number
 *@b: the second number
 *Return: returns the result of a modulus b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
