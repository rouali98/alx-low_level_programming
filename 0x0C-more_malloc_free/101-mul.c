#include <stdio.h>
#include <stdlib.h>
#include "main.h"

struct s_multip
{
	int	len1;
	int	len2;
	int	len;
	int	i;
	int	carry;
	int	digit1;
	int	digit2;
	int	*result;
	int	a;

} mul;

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int	_is_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * errors - handles errors for main
 */
void	errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;

	struct mul;
	mul.a = 0;
	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !_is_digit(s1) || !_is_digit(s2))
		errors();
	mul.len1 = _strlen(s1);
	mul.len2 = _strlen(s2);
	mul.len = mul.len1 + mul.len2 + 1;
	mul.result = malloc(sizeof(int) * mul.len);
	if (!mul.result)
		return (1);
	mul.i = 0;
	while (mul.i <= mul.len1 + mul.len2)
		mul.result[mul.i++] = 0;
	mul.len1 = mul.len1 - 1;
	while (mul.len1 >= 0)
	{
		mul.digit1 = s1[mul.len1] - '0';
		mul.carry = 0;
		mul.len2 = _strlen(s2) - 1;
		while (mul.len2 >= 0)
		{
			mul.digit2 = s2[mul.len2] - '0';
			mul.carry += mul.result[mul.len1 + mul.len2 + 1] + (mul.digit1 * mul.digit2);
			mul.result[mul.len1 + mul.len2 + 1] = mul.carry % 10;
			mul.carry /= 10;
			mul.len2--;
		}
		if (mul.carry > 0)
			mul.result[mul.len1 + mul.len2 + 1] += mul.carry;
		mul.len1--;
	}
	mul.i = 0; 
	while (mul.i < mul.len - 1)
	{
		if (mul.result[mul.i])
			mul.a = 1;
		if (mul.a)
			putchar(mul.result[mul.i] + '0');
		mul.i++;
	}
	if (!mul.a)
		_putchar('0');
	_putchar('\n');
	free(mul.result);
	return (0);
}
