#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int	op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference between the two integers
 */
int	op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of the two integers
 */
int	op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: The first integer (dividend)
 * @b: The second integer (divisor)
 *
 * Return: The result of the division or 0 if b is 0
 */
int	op_div(int a, int b)
{
	return (b == 0 ? 0 : a / b);
}

/**
 * op_mod - Calculates the remainder of the division of two integers
 * @a: The first integer (dividend)
 * @b: The second integer (divisor)
 *
 * Return: The remainder of the division or 0 if b is 0
 */
int	op_mod(int a, int b)
{
	return (b == 0 ? 0 : a % b);
}
